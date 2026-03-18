/*
 * XREFs of ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00C0304
 * Callers:
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00C0454 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0187198 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C00209A0 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceHelper(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        struct DXGSHAREDRESOURCE *a4,
        unsigned __int8 a5,
        int a6)
{
  char v8; // r14
  __int64 v10; // rbp
  PVOID v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rbx
  DXGPROCESSSHAREDACCESS *v16; // rcx
  __int64 i; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  DXGPROCESSSHAREDACCESS **v30; // r8
  DXGPROCESSSHAREDACCESS **v31; // rdx
  _BYTE v32[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 5156LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a4 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v24[4] = 0LL;
    v24[3] = this;
LABEL_26:
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)a4 + 18);
  if ( !v10 || a6 && *(PERESOURCE **)(v10 + 72) != this )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v24[3] = this;
    v24[4] = a4;
    goto LABEL_26;
  }
  v11 = 0LL;
  v12 = 0;
  if ( v8
    || (v25 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL),
        v11 = Object,
        v12 = v25,
        v25 >= 0) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v10 + 8), (__int64)a3, (__int64)a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    v15 = (__int64 *)(v10 + 48);
    v16 = 0LL;
    for ( i = *(_QWORD *)(v10 + 48); (__int64 *)i != v15; i = *(_QWORD *)i )
    {
      if ( v8 )
      {
        if ( *(_BYTE *)(i + 16) )
          goto LABEL_31;
      }
      else if ( !*(_BYTE *)(i + 16) && *(PVOID *)(i + 24) == v11 )
      {
LABEL_31:
        v16 = (DXGPROCESSSHAREDACCESS *)(i - 8);
        break;
      }
    }
    if ( a5 )
    {
      if ( !v16 )
      {
        v18 = (char *)operator new(0x28uLL, 0x4B677844u, PagedPool);
        if ( v18 )
        {
          v18[24] = v8;
          *((_QWORD *)v18 + 4) = v11;
          v20 = *v15;
          v21 = v18 + 8;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            __fastfail(3u);
          *v21 = v20;
          v11 = 0LL;
          v21[1] = v15;
          *(_QWORD *)(v20 + 8) = v21;
          *v15 = (__int64)v21;
        }
        else
        {
          v29 = WdLogNewEntry5_WdLowResource(v19);
          v12 = -1073741801;
          *(_QWORD *)(v29 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v29);
        }
      }
    }
    else if ( v16 )
    {
      v30 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v16 + 1);
      v31 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v16 + 2);
      if ( v30[1] != (DXGPROCESSSHAREDACCESS *)((char *)v16 + 8) || *v31 != (DXGPROCESSSHAREDACCESS *)((char *)v16 + 8) )
        __fastfail(3u);
      *v31 = (DXGPROCESSSHAREDACCESS *)v30;
      v30[1] = (DXGPROCESSSHAREDACCESS *)v31;
      DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v16);
    }
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v32[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, i, v13, v14);
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v27, v26, a3, a4);
    *(_QWORD *)(v28 + 24) = a3;
    WdLogEvent5_WdWarning(v28);
  }
  return v12;
}
