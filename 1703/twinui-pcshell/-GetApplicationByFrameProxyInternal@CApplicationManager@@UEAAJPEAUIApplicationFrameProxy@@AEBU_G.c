/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x18000D530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v7)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 (__fastcall ***v18)(_QWORD, const struct _GUID *, void **); // [rsp+A0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+50h] BYREF
  const struct _GUID *v20; // [rsp+B0h] [rbp+58h]
  __int64 v21; // [rsp+B8h] [rbp+60h] BYREF

  v20 = a3;
  *a4 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = v18;
  }
  if ( v7 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v7)[2])(v7);
  }
  v18 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = -1;
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v21) >= 0 )
      {
        v19 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 496LL))(v21, &v19) >= 0 )
          v11 = ((*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationFrameProxy *))(*(_QWORD *)v19 + 232LL))(
                   v19,
                   a2) != 0)
              - 1;
        v12 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 47) )
        goto LABEL_19;
    }
    v8 = v9;
    v14 = 0;
  }
  else
  {
LABEL_19:
    v14 = -2147319765;
  }
  if ( v14 >= 0 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 46) + 8 * v8);
    v14 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v14 >= 0 )
    v14 = (**v18)(v18, v20, a4);
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)v14;
}
