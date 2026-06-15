/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x180107424
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180106414 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x180106F2C (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        void *Src,
        unsigned int Size)
{
  unsigned int v7; // ebx
  unsigned int v9; // esi
  void *v10; // rax
  int v11; // edx
  __int64 v12; // r8
  unsigned __int8 *v13; // rcx
  unsigned int v14; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  int Dictionary; // [rsp+30h] [rbp-41h] BYREF
  _DWORD v19[3]; // [rsp+34h] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  const char *v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-9h]
  int *v23; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+78h] [rbp+7h]
  int *p_Dictionary; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h]

  v7 = 0;
  v9 = 0;
  if ( Src )
  {
    if ( (Size & 1) != 0 )
    {
      v9 = -2147024809;
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v22 = 55LL;
        v21 = "SpatialAudioMetadataDictionary::RuntimeClassInitialize";
        Dictionary = 140;
        v23 = &Dictionary;
        v24 = 4LL;
        v19[0] = -2147024809;
        p_Dictionary = v19;
        v26 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, a3, a4, 5u, &pData);
      }
      return v9;
    }
    *(_DWORD *)(a1 + 124) = Size >> 1;
    v10 = operator new(saturated_mul(Size >> 1, 2uLL));
    *(_QWORD *)(a1 + 128) = v10;
    memcpy_0(v10, Src, Size);
    goto LABEL_6;
  }
  Dictionary = SpatialAudioMetadataDictionary::LoadDictionary(a1, a2, (__int64)a3, (__int64)a4, a5);
  v9 = Dictionary;
  if ( Dictionary >= 0 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 96) = 0LL;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 = 0;
      v12 = *(unsigned int *)(a1 + 124);
      v13 = (unsigned __int8 *)(*(_QWORD *)(a1 + 128) + 1LL);
      do
      {
        v14 = *v13;
        v11 += v14 + 1;
        v13 += 2;
        *(_DWORD *)(a1 + 96) = v11;
        if ( v7 <= v14 )
          v7 = v14;
        *(_DWORD *)(a1 + 100) = v7;
        --v12;
      }
      while ( v12 );
    }
    return v9;
  }
  if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v22 = 55LL;
    v21 = "SpatialAudioMetadataDictionary::RuntimeClassInitialize";
    v19[0] = 149;
    v23 = v19;
    v24 = 4LL;
    p_Dictionary = &Dictionary;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v16, v17, 5u, &pData);
  }
  return v9;
}
