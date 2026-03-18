/*
 * XREFs of ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01C884C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01EA408 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

void __fastcall xxxHandleMTNodeTargetWindow(struct tagPOINTERINFONODE *a1)
{
  int v2; // ecx
  struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  bool v6; // zf
  int v7; // eax
  unsigned __int64 v8; // r9
  __int16 v9; // r8
  bool v10; // cf
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+28h] [rbp-30h]
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) == 0 )
  {
    v2 = *((_DWORD *)a1 + 1);
    if ( (v2 & 0x200) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (v2 & 0x80u) != 0 )
    {
      v3 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), 1);
      v4 = v3;
      if ( v3 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
        if ( CompositionInputWindowUIOwner )
        {
          if ( (*(_BYTE *)(GetTopLevelWindow((__int64)CompositionInputWindowUIOwner) + 71) & 8) != 0 )
          {
            v6 = (*((_DWORD *)a1 + 17) & 0x10000) == 0;
            *((_DWORD *)a1 + 8) = -2;
            if ( !v6 )
              PointerList::SetPointerCapture(*((_QWORD *)a1 + 2), v4, 1LL, 4294967294LL, 0);
          }
          else
          {
            v7 = *((_DWORD *)a1 + 17);
            if ( (v7 & 0x2000) != 0 && (v7 & 0x10000) != 0 )
            {
              v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v14;
              ++*((_DWORD *)v4 + 2);
              v8 = *((_QWORD *)a1 + 2);
              v9 = *((_WORD *)a1 + 16);
              v10 = __CFSHR__(*((_DWORD *)a1 + 1), 8);
              v14[1] = v4;
              xxxPointerActivateInternal(v4, -v10, v9, v8, (struct tagPOINTERINFONODE *)((char *)a1 + 48), v13);
              ThreadUnlock1(v12, v11);
            }
          }
        }
      }
    }
  }
}
