/*
 * XREFs of sub_18004CBB4 @ 0x18004CBB4
 * Callers:
 *     sub_18004CACC @ 0x18004CACC (sub_18004CACC.c)
 *     LdrGetDllPath @ 0x18004CB90 (LdrGetDllPath.c)
 * Callees:
 *     sub_18004CE2C @ 0x18004CE2C (sub_18004CE2C.c)
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 *     RtlDetermineDosPathNameType_U @ 0x18004FB50 (RtlDetermineDosPathNameType_U.c)
 *     sub_18005032C @ 0x18005032C (sub_18005032C.c)
 */

__int64 __fastcall sub_18004CBB4(
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
  char v12; // si
  PCWSTR v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  RTL_PATH_TYPE v20; // eax

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
  if ( dword_18015BF58 )
  {
    v9 = (a2 & 0x2000) != 0 || (dword_18015BF58 & 0x2000) != 0;
    v11 = dword_18015BF58 & 0xFFFFDFFF;
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
        sub_18005032C(DosFileName);
        v13 = DosFileName;
        if ( (dword_180158674 & 0x40) != 0 )
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
    v14 = sub_18004CE84(&unk_18015A2E0, sub_18004FA70, v13, 0LL);
    *a7 = 0LL;
    v15 = v14;
    goto LABEL_8;
  }
  if ( (v11 & 0x1000) != 0 )
  {
    v11 |= 0xA00u;
    if ( (dword_180158674 & 4) != 0 )
      v11 |= 0x400u;
  }
  v17 = v11;
  LODWORD(v17) = v11 | 0x100;
  if ( !v12 )
    v17 = v11;
  v18 = sub_18004CE84(&unk_18015A2D0, sub_18004CFC0, v17, v13);
  v15 = v18;
  if ( !v18 )
    goto LABEL_46;
  *a7 = *(_QWORD *)(v18 + 88);
LABEL_8:
  if ( v15 )
  {
    if ( a6 )
    {
      *a6 = *(_OWORD *)v15;
      a6[1] = *(_OWORD *)(v15 + 16);
      a6[2] = *(_OWORD *)(v15 + 32);
      a6[3] = *(_OWORD *)(v15 + 48);
      a6[4] = *(_OWORD *)(v15 + 64);
    }
    *a3 = v15 + 112;
    if ( a4 )
    {
      if ( v9 )
        v19 = *(_QWORD *)(v15 + 104);
      else
        v19 = 0LL;
      *a4 = v19;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v15 + 96);
    sub_18004CE2C(a5, DosFileName, *a3, 5313LL);
    return 0LL;
  }
LABEL_46:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *a7 = 0LL;
  return 3221225495LL;
}
