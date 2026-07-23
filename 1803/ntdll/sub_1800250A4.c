/*
 * XREFs of sub_1800250A4 @ 0x1800250A4
 * Callers:
 *     LdrGetDllPath @ 0x180025080 (LdrGetDllPath.c)
 *     sub_180043500 @ 0x180043500 (sub_180043500.c)
 * Callees:
 *     sub_1800252F4 @ 0x1800252F4 (sub_1800252F4.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     RtlDetermineDosPathNameType_U @ 0x18007A0F0 (RtlDetermineDosPathNameType_U.c)
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 */

__int64 __fastcall sub_1800250A4(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  bool v9; // r12
  bool v10; // di
  unsigned int v11; // ebx
  char v12; // r14
  PCWSTR v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  RTL_PATH_TYPE v20; // eax
  __int64 v21; // rax

  v9 = (a2 & 0x2000) != 0;
  v10 = 0;
  v11 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v11 != 8 )
      return 3221225485LL;
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v11 )
      goto LABEL_4;
  }
  if ( dword_18015CFE0 )
  {
    v9 = (a2 & 0x2000) != 0 || (dword_18015CFE0 & 0x2000) != 0;
    v11 = dword_18015CFE0 & 0xFFFFDFFF;
  }
LABEL_4:
  v13 = 0LL;
  if ( (v11 & 0x100) != 0 || v12 )
  {
    v20 = RtlDetermineDosPathNameType_U(DosFileName);
    if ( (unsigned int)(v20 - 1) > 1 )
      v10 = v20 != RtlPathTypeLocalDevice
         || DosFileName[2] != 63
         || RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute;
    v13 = DosFileName;
    if ( v10 )
    {
      if ( v12 )
      {
        sub_18007D594(DosFileName);
        if ( (dword_1801596D4 & 0x40) != 0 )
        {
          v12 = 0;
          v10 = (v11 & 0x100) != 0;
        }
      }
      if ( v10 )
      {
        if ( v11 )
          return 3221225485LL;
        goto LABEL_7;
      }
    }
  }
  if ( !v11 )
  {
LABEL_7:
    v14 = sub_18002534C(&unk_18015B2E0, sub_18006DE80, v13, 0LL);
    v15 = 0LL;
    goto LABEL_8;
  }
  if ( (v11 & 0x1000) != 0 )
  {
    v11 |= 0xA00u;
    if ( (dword_1801596D4 & 4) != 0 )
      v11 |= 0x400u;
  }
  v18 = v11;
  LODWORD(v18) = v11 | 0x100;
  if ( !v12 )
    v18 = v11;
  v19 = sub_18002534C(&unk_18015B2D0, sub_18006DD40, v18, v13);
  v14 = v19;
  if ( !v19 )
  {
    v16 = a7;
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(v19 + 88);
LABEL_8:
  v16 = a7;
  *a7 = v15;
  if ( v14 )
  {
    if ( a6 )
    {
      *a6 = *(_OWORD *)v14;
      a6[1] = *(_OWORD *)(v14 + 16);
      a6[2] = *(_OWORD *)(v14 + 32);
      a6[3] = *(_OWORD *)(v14 + 48);
      a6[4] = *(_OWORD *)(v14 + 64);
    }
    *a3 = v14 + 112;
    if ( a4 )
    {
      if ( v9 )
        v21 = *(_QWORD *)(v14 + 104);
      else
        v21 = 0LL;
      *a4 = v21;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v14 + 96);
    sub_1800252F4(v14, DosFileName, *a3, 5313LL);
    return 0LL;
  }
LABEL_47:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *v16 = 0LL;
  return 3221225495LL;
}
