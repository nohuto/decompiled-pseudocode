/*
 * XREFs of ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@Z @ 0x1800095A8
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z @ 0x180070E88 (-AddMultipleAndSet@-$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Initialize(
        CPrimitiveGroupDrawListGenerator *this,
        struct IImageSource **a2,
        unsigned __int64 a3,
        struct IImageSource **a4,
        unsigned __int64 a5,
        struct CResource **a6,
        unsigned __int64 a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  unsigned int v18; // esi
  __int64 v20; // rax
  int v21; // r9d
  struct CResource **v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edi
  struct CResource *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-38h]
  char *v30; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  if ( a3 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = DynArray<IImageSource *,0>::AddMultipleAndSet((char *)this + 40, &a2[v13]);
      v7 = v14;
      if ( v14 < 0 )
        break;
      v13 = ++v8;
      if ( v8 >= a3 )
        goto LABEL_5;
    }
    v29 = 214;
    goto LABEL_11;
  }
LABEL_5:
  v15 = a5;
  v16 = 0;
  if ( a5 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v14 = DynArray<IImageSource *,0>::AddMultipleAndSet((char *)this + 72, &a4[v20]);
      v7 = v14;
      if ( v14 < 0 )
        break;
      v20 = ++v16;
      if ( v16 >= v15 )
        goto LABEL_6;
    }
    v29 = 219;
LABEL_11:
    v21 = v14;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v29);
    return v7;
  }
LABEL_6:
  v17 = a7;
  v18 = 0;
  if ( a7 )
  {
    v22 = a6;
    v23 = 0LL;
    v24 = (unsigned int)v30;
    while ( 1 )
    {
      v25 = v22[v23];
      if ( v25 )
        v30 = (char *)v25 - 8;
      else
        v30 = 0LL;
      v26 = *((unsigned int *)this + 32);
      v27 = v26 + 1;
      if ( (int)v26 + 1 >= (unsigned int)v26 )
        v24 = v26 + 1;
      v7 = v27 < (unsigned int)v26 ? 0x80070216 : 0;
      if ( v27 < (unsigned int)v26 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else if ( v24 > *((_DWORD *)this + 31) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 104, 8LL, 1LL, &v30);
        v7 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v26) = v30;
        *((_DWORD *)this + 32) = v24;
      }
      if ( (v7 & 0x80000000) != 0 )
        break;
      v23 = ++v18;
      if ( v18 >= v17 )
        return v7;
    }
    v29 = 228;
    v21 = v7;
    goto LABEL_31;
  }
  return v7;
}
