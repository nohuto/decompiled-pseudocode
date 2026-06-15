/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x1800D90FC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x1800D81FC (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x1800D8C6C (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5,
        void *Src,
        unsigned int Size)
{
  int v7; // ebx
  unsigned int v9; // esi
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  void *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int8 *v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int Dictionary; // [rsp+30h] [rbp-41h] BYREF
  _DWORD v22[3]; // [rsp+34h] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-11h] BYREF
  int *v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  int *p_Dictionary; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]

  v7 = 0;
  v9 = 0;
  if ( Src )
  {
    if ( (Size & 1) != 0 )
    {
      v9 = -2147024809;
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::RuntimeClassInitialize");
        Dictionary = 140;
        v25 = &Dictionary;
        p_Dictionary = v22;
        v26 = 4LL;
        v22[0] = -2147024809;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v10, v11, 5u, &pData);
      }
      return v9;
    }
    *(_DWORD *)(a1 + 132) = Size >> 1;
    v12 = operator new(saturated_mul(Size >> 1, 2uLL));
    *(_QWORD *)(a1 + 136) = v12;
    memcpy_0(v12, Src, Size);
    goto LABEL_6;
  }
  Dictionary = SpatialAudioMetadataDictionary::LoadDictionary(a1, a2, a3, a4, a5);
  v9 = Dictionary;
  if ( Dictionary >= 0 )
  {
LABEL_6:
    v13 = *(_DWORD *)(a1 + 132);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( v13 )
    {
      v14 = 0;
      v15 = (unsigned __int8 *)(*(_QWORD *)(a1 + 136) + 1LL);
      v16 = v13;
      do
      {
        v17 = *v15;
        v7 += v17 + 1;
        v15 += 2;
        *(_DWORD *)(a1 + 104) = v7;
        if ( v14 > v17 )
          v17 = v14;
        *(_DWORD *)(a1 + 108) = v17;
        v14 = v17;
        --v16;
      }
      while ( v16 );
    }
    return v9;
  }
  if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::RuntimeClassInitialize");
    v22[0] = 149;
    v25 = v22;
    p_Dictionary = &Dictionary;
    v26 = 4LL;
    v28 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
  }
  return v9;
}
