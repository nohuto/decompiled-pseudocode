/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1404E8D2C
 * Callers:
 *     MmMapViewOfSectionEx @ 0x140069F4C (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x14074A1C8 (NtMapViewOfSectionEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1404E86C4 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapExParametersInitialize @ 0x1404E8F4C (MiMapExParametersInitialize.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x14057D65C (EtwTiLogMapExecView.c)
 *     MiMapViewOfSectionCommon @ 0x140593B40 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        int a1,
        int a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        unsigned __int64 *Address,
        unsigned int a10,
        int a11,
        __int64 a12,
        char a13)
{
  __int64 result; // rax
  int MapExtendedParameters; // edi
  __int64 v17; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-E8h]
  __int64 v19; // [rsp+68h] [rbp-E0h] BYREF
  char v20; // [rsp+70h] [rbp-D8h]
  PVOID Object; // [rsp+78h] [rbp-D0h]
  PVOID v22; // [rsp+80h] [rbp-C8h]
  _BYTE v23[24]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-A0h]
  char v25; // [rsp+D0h] [rbp-78h]
  int v26; // [rsp+D4h] [rbp-74h]
  __int64 v27; // [rsp+D8h] [rbp-70h]
  _QWORD v28[6]; // [rsp+100h] [rbp-48h] BYREF

  result = MiMapViewOfSectionCommon(a2, a1, a3, (int)a4, (__int64)a6, (__int64)a5, a8, 0LL, a13, &v17);
  if ( (int)result < 0 )
  {
    if ( v17 )
      ++dword_1403CBEC4;
    else
      ++dword_1403CBEC0;
  }
  else
  {
    MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, a10, a13, 6, v28);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapParametersInitialize(v23, v18, a7, a8, 0LL);
      if ( MapExtendedParameters >= 0 )
      {
        MapExtendedParameters = MiMapExParametersInitialize(v23, &v17, v28);
        if ( MapExtendedParameters >= 0 )
        {
          v26 = a11;
          v27 = a12;
          MapExtendedParameters = MiMapViewOfSection(
                                    (_DWORD)Object,
                                    (unsigned int)v23,
                                    (unsigned int)&v17,
                                    0,
                                    (__int64)&v19,
                                    1,
                                    0);
          if ( MapExtendedParameters >= 0 )
          {
            if ( (v25 & 4) != 0 )
              DbgkMapViewOfSection(v22);
            if ( (v20 & 2) != 0 )
              EtwTiLogMapExecView((_DWORD)v22, v17, v18, a7, a8);
            *a4 = v17;
            *a6 = v24;
            if ( a5 )
              *a5 = v19;
          }
        }
      }
    }
    if ( MapExtendedParameters < 0 )
    {
      if ( v17 )
        ++dword_1403CBEC4;
      else
        ++dword_1403CBEC0;
    }
    if ( !a3 )
    {
      ObfDereferenceObject(Object);
      ObfDereferenceObjectWithTag(v22, 0x77566D4Du);
    }
    return (unsigned int)MapExtendedParameters;
  }
  return result;
}
