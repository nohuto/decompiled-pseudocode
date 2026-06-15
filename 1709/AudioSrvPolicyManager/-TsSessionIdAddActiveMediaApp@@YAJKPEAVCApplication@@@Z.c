/*
 * XREFs of ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001CE1C
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x1800152D4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000AC10 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001CD64 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdAddActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  struct TSSession *v6; // rsi
  __int64 **v7; // rbx
  __int64 **i; // rax
  __int64 *v9; // rax
  __int64 **v10; // rcx
  struct CApplication *v12; // [rsp+48h] [rbp+10h] BYREF
  struct TSSession *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a2;
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = TsSessionFromSessionId(a1, 0, 0LL, &v13);
  if ( v5 )
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v4 = v5;
  }
  else
  {
    v6 = v13;
    v7 = (__int64 **)((char *)v13 + 104);
    for ( i = (__int64 **)*((_QWORD *)v13 + 13); i; i = (__int64 **)*i )
    {
      if ( i[2] == (__int64 *)a2 )
        goto LABEL_10;
    }
    i = 0LL;
LABEL_10:
    if ( !i )
    {
      v9 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
             (__int64)v13 + 104,
             (__int64 *)&v12,
             *((_QWORD *)v13 + 14),
             0LL);
      v10 = (__int64 **)v7[1];
      if ( v10 )
        *v10 = v9;
      else
        *v7 = v9;
      v7[1] = v9;
      TsSessionSendAppManagerNotification(v6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v4;
}
