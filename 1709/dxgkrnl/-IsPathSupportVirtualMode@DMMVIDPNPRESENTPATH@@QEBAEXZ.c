/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00A5AB4
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00062DC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A39A0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00A5DE0 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rcx
  bool v6; // si
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *i; // rdi
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rbx
  char v15; // di
  int v16; // eax
  int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // [rsp+58h] [rbp+10h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v4) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v21);
  }
  v6 = 1;
  v7 = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  if ( !v4 || (_DWORD)v7 == -1 )
  {
    v17 = -1073741811;
  }
  else
  {
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v22 + 24) = 7392LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v8 = *(_QWORD *)(v4 + 2304);
    if ( !v8 )
    {
      v23 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v23 + 24) = 7397LL;
      WdLogEvent5_WdError(v23);
      v6 = 1;
      goto LABEL_45;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v25);
    }
    if ( !*(_QWORD *)(v4 + 2304) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v26);
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 2304) + 96LL);
    if ( v9 )
    {
      if ( v9 == -168 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v5);
        WdLogEvent5_WdAssertion(v28);
      }
      KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v9 + 168));
      for ( i = *(__int64 **)(v9 + 128); i != (__int64 *)(v9 + 128) && i; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 7) == (_DWORD)v7 )
        {
          if ( *((_DWORD *)i + 104) != 1 )
            i = (__int64 *)i[53];
          if ( i )
          {
            if ( v9 == -168 )
            {
              v29 = WdLogNewEntry5_WdAssertion(v11);
              WdLogEvent5_WdAssertion(v29);
            }
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 168));
            if ( *((_DWORD *)i + 104) != 1 )
            {
              v30 = WdLogNewEntry5_WdAssertion(v13);
              WdLogEvent5_WdAssertion(v30);
            }
            KeEnterCriticalRegion();
            v14 = (struct _ERESOURCE *)(i + 35);
            ExAcquireResourceSharedLite((PERESOURCE)(i + 35), 1u);
            if ( *((_BYTE *)i + 564) )
              v15 = 1;
            else
              v15 = *((_BYTE *)i + 24) >> 7;
            ExReleaseResourceLite(v14);
            KeLeaveCriticalRegion();
            v16 = 0;
            goto LABEL_35;
          }
          break;
        }
      }
      v31 = WdLogNewEntry5_WdTrace(v11, v10);
      *(_QWORD *)(v31 + 24) = v7;
      *(_QWORD *)(v31 + 32) = v9;
      if ( v9 == -168 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32);
        WdLogEvent5_WdAssertion(v33);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 168));
      v35 = WdLogNewEntry5_WdDmmEvent(v34);
      *(_QWORD *)(v35 + 24) = v7;
      *(_QWORD *)(v35 + 32) = v4;
      WdLogEvent5_WdDmmEvent(v35);
      v16 = -1073741632;
      v15 = 0;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v27 + 24) = v4;
      WdLogEvent5_WdError(v27);
      v15 = v37;
      v16 = -1073741811;
    }
LABEL_35:
    v17 = 0;
    if ( v16 != -1073741632 )
      v17 = v16;
    if ( v17 < 0 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v36 + 24) = v17;
      WdLogEvent5_WdAssertion(v36);
      v6 = 1;
    }
    else if ( !v15 )
    {
      v6 = *(_BYTE *)(v8 + 132) == 0;
    }
  }
  if ( v17 < 0 )
  {
LABEL_45:
    v24 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v24);
  }
  return !v6;
}
