/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290
 * Callers:
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     _ConvertMemHandle @ 0x1C00C4E5C (_ConvertMemHandle.c)
 *     HMUnlockDestroyObject @ 0x1C00C5804 (HMUnlockDestroyObject.c)
 *     InternalSetClipboardData @ 0x1C00C5D58 (InternalSetClipboardData.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F415C (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  __int64 ClipFormat; // r14
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1LL, 1LL);
  v3 = FindClipFormat(a1, 7LL, 1LL);
  v4 = FindClipFormat(a1, 13LL, 1LL);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 16LL, 1LL) )
    {
      v12 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( v12 )
      {
        Src = *(unsigned __int16 *)(v12 + 40);
        v13 = ConvertMemHandle(&Src, 4uLL, v11);
        v14 = v13;
        if ( v13 )
        {
          if ( !(unsigned int)InternalSetClipboardData((__int64)a1, 16LL, v13, 0, 1) )
          {
            v16 = HMValidateHandleNoRip(v14, 6);
            if ( v16 )
              HMUnlockDestroyObject(v16);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData((__int64)a1, 1LL, 1LL, 0, 1);
    if ( !v3 )
      InternalSetClipboardData((__int64)a1, 7LL, 1LL, 0, 1);
    if ( !v5 )
      InternalSetClipboardData((__int64)a1, 13LL, 1LL, 0, 1);
  }
  if ( !FindClipFormat(a1, 3LL, 1LL) )
  {
    v6 = FindClipFormat(a1, 14LL, 1LL);
    if ( v6 )
    {
      v15 = 3LL;
LABEL_29:
      InternalSetClipboardData((__int64)a1, v15, (*(_QWORD *)(v6 + 8) != 0LL) + 3LL, 0, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat(a1, 14LL, 1LL) )
  {
    v6 = FindClipFormat(a1, 3LL, 1LL);
    if ( v6 )
    {
      v15 = 14LL;
      goto LABEL_29;
    }
  }
LABEL_8:
  v7 = FindClipFormat(a1, 2LL, 1LL);
  v8 = FindClipFormat(a1, 8LL, 1LL);
  v9 = FindClipFormat(a1, 17LL, 1LL);
  v10 = v9;
  if ( !v7 )
  {
    if ( !v8 && !v9 )
      return;
    InternalSetClipboardData((__int64)a1, 2LL, 2LL, 0, 1);
  }
  if ( !v8 )
    InternalSetClipboardData((__int64)a1, 8LL, 2LL, 0, 1);
  if ( !v10 )
    InternalSetClipboardData((__int64)a1, 17LL, 2LL, 0, 1);
  if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 && !FindClipFormat(a1, 9LL, 1LL) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData((__int64)a1, 9LL, 2LL, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
