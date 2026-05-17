/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x180089CD0
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800CAF40 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x18007D1F0 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwMakeTemporaryObject @ 0x18009CBD0 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     sub_1800EE06C @ 0x1800EE06C (sub_1800EE06C.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  char v6; // r13
  __int64 result; // rax
  int InformationFile; // edi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v15; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-98h] BYREF
  __int64 v17[2]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-80h] BYREF
  __int64 v19; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-70h] BYREF
  __int64 v21; // [rsp+90h] [rbp-68h]
  _BYTE v22[16]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v23[8]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp-48h]

  v19 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = &unk_180116108;
  v17[1] = (__int64)v4;
  v5 = v4[7];
  LODWORD(v17[0]) = v5 & 0x1000000;
  LODWORD(v18) = v5 & 0x1000000;
  v14 = (v5 & 0x1000000) != 0;
  v6 = a1 & 1;
  result = ZwCreateSection(&v16, (unsigned int)v4[2], *((_QWORD *)v4 + 2), 0LL, v4[6], v5, a1);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v20 = 0LL;
    InformationFile = ZwMapViewOfSection(v16, -1LL, &v15, 0LL, 0LL, 0LL, &v20, 1, 0, 16);
    if ( InformationFile < 0 )
      goto LABEL_29;
    if ( v6 )
    {
      v9 = v17[0];
    }
    else
    {
      InformationFile = ZwQueryInformationFile(a1, v22, v23, 24LL, 5);
      if ( InformationFile < 0 )
        goto LABEL_28;
      if ( !(unsigned __int8)sub_1800EE06C(v15, v20, v24) )
        InformationFile = -1073741279;
      v9 = v17[0];
      if ( InformationFile < 0 )
        goto LABEL_28;
    }
    if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
    {
      InformationFile = RtlImageNtHeaderEx(0, v15, v20, &v19);
      if ( InformationFile >= 0 )
      {
        if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
          *(_WORD *)(a2 + 56) = *(_WORD *)(v19 + 22);
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0 && *(_QWORD *)(a2 + 8) )
        {
          v10 = sub_18001014C(v15, v14, 1u, &v18, v17);
          v11 = v17[0];
          if ( v10 < 0 )
            v11 = 0LL;
          v17[0] = v11;
          v21 = v11;
          if ( v11 )
          {
            v18 = 0LL;
            while ( 1 )
            {
              v12 = *(_DWORD *)(v11 + 12);
              if ( !v12 )
                break;
              if ( !v9 )
                RtlImageRvaToVa(v19, v15, v12, &v18);
              _guard_dispatch_icall_fptr();
              v11 += 20LL;
              v21 = v11;
            }
          }
        }
      }
    }
LABEL_28:
    ZwUnmapViewOfSection(-1LL);
LABEL_29:
    if ( InformationFile < 0 || v4 == (_DWORD *)&unk_180116108 )
    {
      v13 = *((_QWORD *)v4 + 2);
      if ( v13 && (*(_BYTE *)(v13 + 24) & 0x10) != 0 )
        ZwMakeTemporaryObject(v16);
      ZwClose(v16);
    }
    else
    {
      *(_QWORD *)v4 = v16;
    }
    return (unsigned int)InformationFile;
  }
  return result;
}
