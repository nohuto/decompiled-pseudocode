/*
 * XREFs of ?xxxHandleMTNodeTargetWindow@@YAXPEAUtagPOINTERINFONODE@@@Z @ 0x1C01CCC7C
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F6320 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

void __fastcall xxxHandleMTNodeTargetWindow(struct tagPOINTERINFONODE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // ecx
  struct tagWND *v7; // rax
  struct tagWND *v8; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  int v14; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+28h] [rbp-30h]
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 1184LL) & 0x2000) == 0 )
  {
    v6 = *((_DWORD *)a1 + 1);
    if ( (v6 & 0x200) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (v6 & 0x80u) != 0 )
    {
      LOBYTE(v5) = 1;
      v7 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), v5, a3, a4);
      v8 = v7;
      if ( v7 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v7);
        if ( CompositionInputWindowUIOwner )
        {
          if ( (*(_BYTE *)(GetTopLevelWindow((__int64)CompositionInputWindowUIOwner) + 71) & 8) != 0 )
          {
            v13 = (*((_DWORD *)a1 + 17) & 0x10000) == 0;
            *((_DWORD *)a1 + 8) = -2;
            if ( !v13 )
              PointerList::SetPointerCapture(*((_QWORD *)a1 + 2), v8, 1LL, 4294967294LL, 0);
          }
          else
          {
            v14 = *((_DWORD *)a1 + 17);
            if ( (v14 & 0x2000) != 0 && (v14 & 0x10000) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
              v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
              *(_QWORD *)(ThreadWin32Thread + 392) = v19;
              v19[1] = v8;
              _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
              xxxPointerActivateInternal(
                v8,
                -__CFSHR__(*((_DWORD *)a1 + 1), 8),
                *((_WORD *)a1 + 16),
                *((_QWORD *)a1 + 2),
                (struct tagPOINTERINFONODE *)((char *)a1 + 48),
                v18);
              ThreadUnlock1(v17, v16);
            }
          }
        }
      }
    }
  }
}
