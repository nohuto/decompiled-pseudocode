/*
 * XREFs of ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000D794
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000E26C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000EAFC (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000FE08 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck(CDuckingManager *this, const unsigned __int16 *a2)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  SIZE_T v8; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v10; // rbx
  HANDLE v12; // rax
  int *v14; // rbx
  ATL::CAtlException *v15[4]; // [rsp+28h] [rbp-50h] BYREF
  __int16 v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+80h] [rbp+8h]
  unsigned __int16 *v18; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v5 = *(_QWORD *)&v4[1].LockCount;
  LeaveCriticalSection(v4);
  if ( v5 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, a2);
    }
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = 2 * v6 + 2;
    v8 = 2 * v6 + 74;
    v17 = 2 * v6 + 74;
    ProcessHeap = GetProcessHeap();
    v10 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v8);
    v18 = v10;
    if ( v10 )
    {
      *(_DWORD *)v10 = v17;
      *((_DWORD *)v10 + 1) = 512;
      *((_DWORD *)v10 + 6) = v7;
      *((_BYTE *)v10 + 60) = 0;
      *((_DWORD *)v10 + 14) = 0;
      StringCbCopyW(v10 + 36, v7, a2);
      try
      {
        v15[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
        v15[2] = (ATL::CAtlException *)v10;
        v15[3] = 0LL;
        v16 = 256;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v4);
      }
      catch ( ATL::CAtlException *v15 )
      {
        v14 = (int *)v15[0];
        if ( *(_DWORD *)v15[0] == -1073741571 )
          _o__resetstkoflw();
        v3 = *v14;
        v10 = v18;
      }
    }
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v10);
    if ( v3 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, v3);
      }
      AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoUnduck", 906, v3);
    }
  }
  return 0LL;
}
