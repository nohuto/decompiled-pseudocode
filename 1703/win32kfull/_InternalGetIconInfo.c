/*
 * XREFs of _InternalGetIconInfo @ 0x1C0048770
 * Callers:
 *     NtUserGetIconInfo @ 0x1C00483C0 (NtUserGetIconInfo.c)
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C020CDCC (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     _GetIconSize @ 0x1C0048BA8 (_GetIconSize.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall InternalGetIconInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        _DWORD *a5,
        int a6)
{
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 DIBitmapReal; // rax
  __int64 v13; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // r10d
  unsigned int v19; // [rsp+70h] [rbp-B8h] BYREF
  __int64 Bitmap; // [rsp+78h] [rbp-B0h] BYREF
  BOOL v21; // [rsp+80h] [rbp-A8h]
  __int64 v22; // [rsp+88h] [rbp-A0h]
  __int64 v23; // [rsp+90h] [rbp-98h]
  __int64 v24; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  _DWORD *v26; // [rsp+A8h] [rbp-80h]
  _QWORD v27[6]; // [rsp+B8h] [rbp-70h] BYREF

  DestinationString = a4;
  v8 = a1;
  v26 = a5;
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v15 = *(__int64 **)(a1 + 96);
    if ( !v15 )
      return 0LL;
    v8 = *v15;
  }
  GetIconSize(v8, &v19, &Bitmap);
  v21 = v19 != *(_DWORD *)(v8 + 140);
  if ( a6 || !*(_QWORD *)(v8 + 96) )
  {
    v9 = Bitmap;
    v10 = Bitmap;
  }
  else
  {
    v9 = Bitmap;
    v10 = (int)Bitmap / 2;
  }
  Bitmap = GreCreateBitmap(v19, v10, 1LL, 1LL, 0LL);
  if ( !Bitmap )
    return 0LL;
  v11 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(v8 + 96) )
  {
    if ( *(_DWORD *)(v8 + 136) == 32 )
    {
      memset(v27, 0, 0x2CuLL);
      LODWORD(v27[0]) = 40;
      HIDWORD(v27[0]) = v19;
      LODWORD(v27[1]) = v9 / 2;
      *(_QWORD *)((char *)&v27[1] + 4) = 2097153LL;
      HIDWORD(v27[2]) = 0;
      v27[4] = 0LL;
      DIBitmapReal = GreCreateDIBitmapReal(
                       *(HDC *)(gpDispInfo + 56LL),
                       v9 % 2,
                       0LL,
                       (unsigned int *)v27,
                       0,
                       0x2Cu,
                       0,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, 0LL);
    }
    v11 = DIBitmapReal;
    v22 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0LL;
    }
  }
  v23 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 88));
  v24 = GreSelectBitmap(ghdcMem, Bitmap);
  if ( v21 )
  {
    v16 = *(_QWORD *)(v8 + 96);
    if ( !v16 || a6 )
      v17 = *(_DWORD *)(v8 + 144);
    else
      v17 = *(_DWORD *)(v8 + 144) >> 1;
    if ( !v16 || a6 )
      v18 = v9;
    else
      v18 = v9 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v18, ghdcMem2, 0, 0, *(_DWORD *)(v8 + 140), v17, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v19);
  }
  if ( v11 )
  {
    GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 96));
    GreSelectBitmap(ghdcMem, v11);
    if ( v21 )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v9 / 2,
        ghdcMem2,
        0,
        0,
        *(_DWORD *)(v8 + 140),
        *(_DWORD *)(v8 + 144) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v19);
  }
  GreSelectBitmap(ghdcMem2, v23);
  GreSelectBitmap(ghdcMem, v24);
  *(_DWORD *)a2 = *(_WORD *)(v8 + 74) == 3;
  *(_DWORD *)(a2 + 4) = *(__int16 *)(v8 + 84);
  *(_DWORD *)(a2 + 8) = *(__int16 *)(v8 + 86);
  *(_QWORD *)(a2 + 16) = Bitmap;
  *(_QWORD *)(a2 + 24) = v11;
  if ( a3 )
  {
    v13 = *(unsigned __int16 *)(v8 + 72);
    if ( (_WORD)v13 )
      *(_WORD *)a3 = UserGetAtomName(v13, *(_QWORD *)(a3 + 8), *(unsigned __int16 *)(a3 + 2) >> 1);
    else
      *(_WORD *)a3 = 0;
  }
  if ( DestinationString )
  {
    if ( (*(_QWORD *)(v8 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v8 + 56));
    else
      *DestinationString = *(PUNICODE_STRING)(v8 + 56);
  }
  if ( v26 )
    *v26 = *(_DWORD *)(v8 + 136);
  return 1LL;
}
