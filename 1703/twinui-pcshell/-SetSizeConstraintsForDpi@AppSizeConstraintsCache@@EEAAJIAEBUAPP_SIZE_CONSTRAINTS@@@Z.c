/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180082740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180082A08 (-AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z.c)
 *     ?Instance@ApplicationViewTelemetry@ApplicationViewManagement@@KAPEAV12@XZ @ 0x180082B14 (-Instance@ApplicationViewTelemetry@ApplicationViewManagement@@KAPEAV12@XZ.c)
 */

__int64 __fastcall AppSizeConstraintsCache::SetSizeConstraintsForDpi(
        AppSizeConstraintsCache *this,
        unsigned int a2,
        const struct APP_SIZE_CONSTRAINTS *a3)
{
  unsigned __int64 v3; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  _DWORD *v14; // rcx
  struct tagSIZE v15; // rbx
  struct tagSIZE v16; // rdi
  ApplicationViewManagement::ApplicationViewTelemetry *v17; // rcx
  __int64 v19; // rdx
  _BYTE v20[20]; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v22; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 2);
    while ( a2 != *v7 )
    {
      ++v3;
      v7 += 5;
      if ( v3 >= *((_QWORD *)this + 3) )
        goto LABEL_5;
    }
    *(_OWORD *)(*((_QWORD *)this + 2) + 20 * v3 + 4) = *(_OWORD *)a3;
    goto LABEL_20;
  }
LABEL_5:
  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 5);
  *(_DWORD *)v20 = a2;
  *(_OWORD *)&v20[4] = *(_OWORD *)a3;
  if ( v8 == v9 )
  {
    v10 = v8 + 1;
    v11 = -2147024774;
    if ( (unsigned __int64)(v8 + 1) <= 0xFFFFFFFE )
    {
      v11 = 0;
      if ( v10 > v9 )
      {
        v12 = 2 * v9;
        if ( !is_mul_ok(v9, 2uLL) )
        {
          v12 = -1LL;
          v11 = -2147024362;
        }
        if ( v11 < 0 )
          goto LABEL_30;
        v13 = v9 + 4096;
        if ( v12 - v9 <= 0x1000 )
          v13 = v12;
        if ( v10 > v13 )
          v13 = v8 + 1;
        if ( v13 > 0xFFFFFFFE )
          v13 = 4294967294LL;
        v22 = 0LL;
        if ( is_mul_ok(v13, 0x14uLL) )
        {
          v11 = CTCoAllocPolicy::Realloc(
                  (IMalloc *)&v22,
                  (v13 * (unsigned __int128)0x14uLL) >> 64,
                  *((void **)this + 2),
                  20 * v13,
                  &v22);
          if ( v11 >= 0 )
          {
            *((_QWORD *)this + 2) = v22;
            *((_QWORD *)this + 5) = v13;
          }
        }
        else
        {
          v11 = -2147024362;
        }
      }
    }
    if ( v11 >= 0 )
      goto LABEL_27;
LABEL_30:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
LABEL_27:
  ++*((_QWORD *)this + 3);
  v19 = *((_QWORD *)this + 2) + 4 * (5LL * *((_QWORD *)this + 3) - 5);
  if ( v19 )
  {
    *(_OWORD *)v19 = *(_OWORD *)v20;
    *(_DWORD *)(v19 + 16) = *(_DWORD *)&v20[16];
  }
LABEL_20:
  v14 = (_DWORD *)*((_QWORD *)ApplicationViewManagement::ApplicationViewTelemetry::Instance() + 1);
  if ( v14 )
  {
    if ( *v14 )
    {
      v15 = (struct tagSIZE)*((_QWORD *)a3 + 1);
      v16 = *(struct tagSIZE *)a3;
      ApplicationViewManagement::ApplicationViewTelemetry::Instance();
      ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(v17, a2, v16, v15);
    }
  }
  return 0LL;
}
