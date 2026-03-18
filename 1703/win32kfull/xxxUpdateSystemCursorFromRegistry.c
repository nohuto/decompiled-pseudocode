/*
 * XREFs of xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0
 * Callers:
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C00C128C (xxxUpdateSystemCursorsFromRegistry.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01B70F8 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C00C18E4 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
 *     xxxClientExpandStringW @ 0x1C00C3C98 (xxxClientExpandStringW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, unsigned int a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  WCHAR *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // edx
  PWSTR Buffer; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  struct tagCURSOR *Image; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v25; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[528]; // [rsp+270h] [rbp+170h] BYREF

  FastGetProfileStringFromIDW(a1, 1LL, WORD1(gasyscur[2 * (int)a2]), &word_1C02E2588, SourceString, 260, 0);
  v3 = 576;
  if ( SourceString[0] )
  {
    v4 = 4LL;
    v3 = 592;
    v5 = 4LL;
    v6 = v27;
    v7 = SourceString;
    do
    {
      v8 = *((_OWORD *)v7 + 1);
      *v6 = *(_OWORD *)v7;
      v9 = *((_OWORD *)v7 + 2);
      v6[1] = v8;
      v10 = *((_OWORD *)v7 + 3);
      v6[2] = v9;
      v11 = *((_OWORD *)v7 + 4);
      v6[3] = v10;
      v12 = *((_OWORD *)v7 + 5);
      v6[4] = v11;
      v13 = *((_OWORD *)v7 + 6);
      v6[5] = v12;
      v14 = *((_OWORD *)v7 + 7);
      v7 += 64;
      v6[6] = v13;
      v6 += 8;
      *(v6 - 1) = v14;
      --v5;
    }
    while ( v5 );
    *(_QWORD *)v6 = *(_QWORD *)v7;
    v25 = v27;
    v15 = -1LL;
    do
      ++v15;
    while ( SourceString[v15] );
    v16 = 2 * v15;
    if ( v16 >= 0x206 )
      v16 = 518;
    v24[0] = v16;
    v24[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v24) )
    {
      Buffer = DestinationString.Buffer;
      v3 = 80;
      v19 = v25;
      do
      {
        *(_OWORD *)Buffer = *v19;
        *((_OWORD *)Buffer + 1) = v19[1];
        *((_OWORD *)Buffer + 2) = v19[2];
        *((_OWORD *)Buffer + 3) = v19[3];
        *((_OWORD *)Buffer + 4) = v19[4];
        *((_OWORD *)Buffer + 5) = v19[5];
        *((_OWORD *)Buffer + 6) = v19[6];
        Buffer += 64;
        v20 = v19[7];
        v19 += 8;
        *((_OWORD *)Buffer - 1) = v20;
        --v4;
      }
      while ( v4 );
      *(_QWORD *)Buffer = *(_QWORD *)v19;
      DestinationString.Length = v24[0];
      if ( LOWORD(v24[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(a2 + 100));
  }
  Image = (struct tagCURSOR *)xxxClientLoadImage((unsigned int)&DestinationString, v17, 2, 0, 0, v3);
  if ( Image )
  {
    UpdateSystemCursorPath(a2, &DestinationString);
    zzzSetSystemImage(Image);
  }
  return xxxSetMonitorIcoCurIndex(&DestinationString, v3 & 0xFFFFFFBF, a2, 1LL);
}
