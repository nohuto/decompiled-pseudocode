/*
 * XREFs of ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00F2ED8
 * Callers:
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00F302C (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CA6D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C0023EA8 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
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
  __int64 *v13; // rbx
  DXGPROCESSSHAREDACCESS *v14; // rcx
  __int64 *i; // rax
  char v16; // r8
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  DXGPROCESSSHAREDACCESS **v30; // rdx
  DXGPROCESSSHAREDACCESS **v31; // r8
  _BYTE v32[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 5272LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a4 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v23[4] = 0LL;
    v23[3] = this;
LABEL_26:
    v23[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)a4 + 18);
  if ( !v10 || a6 && *(PERESOURCE **)(v10 + 72) != this )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v23[3] = this;
    v23[4] = a4;
    goto LABEL_26;
  }
  v11 = 0LL;
  v12 = 0;
  if ( v8
    || (v24 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL),
        v11 = Object,
        v12 = v24,
        v24 >= 0) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v10 + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    v13 = (__int64 *)(v10 + 48);
    v14 = 0LL;
    for ( i = *(__int64 **)(v10 + 48); i != v13; i = (__int64 *)*i )
    {
      v16 = *((_BYTE *)i + 16);
      if ( v8 )
      {
        if ( v16 )
          goto LABEL_31;
      }
      else if ( !v16 && (PVOID)i[3] == v11 )
      {
LABEL_31:
        v14 = (DXGPROCESSSHAREDACCESS *)(i - 1);
        break;
      }
    }
    if ( a5 )
    {
      if ( !v14 )
      {
        v17 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
        if ( v17 )
        {
          v17[24] = v8;
          *((_QWORD *)v17 + 4) = v11;
          v19 = *v13;
          v20 = v17 + 8;
          if ( *(__int64 **)(*v13 + 8) != v13 )
            __fastfail(3u);
          *v20 = v19;
          v11 = 0LL;
          v20[1] = v13;
          *(_QWORD *)(v19 + 8) = v20;
          *v13 = (__int64)v20;
        }
        else
        {
          v29 = WdLogNewEntry5_WdLowResource(v18);
          v12 = -1073741801;
          *(_QWORD *)(v29 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v29);
        }
      }
    }
    else if ( v14 )
    {
      v30 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v14 + 1);
      if ( v30[1] != (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8)
        || (v31 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v14 + 2), *v31 != (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8)) )
      {
        __fastfail(3u);
      }
      *v31 = (DXGPROCESSSHAREDACCESS *)v30;
      v30[1] = (DXGPROCESSSHAREDACCESS *)v31;
      DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v14);
    }
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v32[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = a3;
    WdLogEvent5_WdWarning(v28);
  }
  return v12;
}
