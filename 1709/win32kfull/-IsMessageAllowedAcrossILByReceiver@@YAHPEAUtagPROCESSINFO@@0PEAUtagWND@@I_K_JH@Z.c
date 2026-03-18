/*
 * XREFs of ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00CCF70
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00940E0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserPostThreadMessage @ 0x1C009E440 (NtUserPostThreadMessage.c)
 *     NtUserPostMessage @ 0x1C00ABE80 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C00CC8E0 (_PostTransformableMessageIL.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00DFDC0 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01C0F9C (_PostMessageCheckIL.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CD04C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     MSGSQMAddMessage @ 0x1C00CD264 (MSGSQMAddMessage.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0100480 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall IsMessageAllowedAcrossILByReceiver(
        struct tagPROCESSINFO *a1,
        void *const **a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned int v11; // ebx
  void *const *WindowMessageFilter; // rax

  v11 = IsMessageAllowedByFilterEx(a2[100], a4, 0LL, 0LL);
  if ( v11 )
  {
    MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 3);
  }
  else if ( a3 )
  {
    WindowMessageFilter = GetWindowMessageFilter(a3);
    v11 = IsMessageAllowedByFilterEx(WindowMessageFilter, a4, 0LL, 0LL);
    if ( v11 )
      MSGSQMAddMessage(a1, (struct tagPROCESSINFO *)a2, a6, a7, 4);
  }
  return v11;
}
