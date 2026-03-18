/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C00C0D7C
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00BE8E4 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00C0B9C (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0118C8C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01A292C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01A31D0 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01E72D8 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00C0E28 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v4; // r8d
  __int16 v5; // r10
  __int64 v6; // r9
  __int16 v7; // cx
  size_t v8; // rdx
  char *v9; // r11
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker(DestinationString, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = 0x7FFFLL;
    v4 = 0;
    v7 = 0;
    v8 = v14 - v15;
    if ( v14 == v15 )
      goto LABEL_16;
    v9 = (char *)v13 + 2 * v15 - (_QWORD)pszSrc;
    do
    {
      if ( !v6 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v9) = *pszSrc;
      --v6;
      ++pszSrc;
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( !v8 && v6 )
    {
LABEL_16:
      if ( *pszSrc )
        v4 = -2147483643;
    }
    DestinationString->Length = 2 * (v5 + v7);
  }
  return v4;
}
