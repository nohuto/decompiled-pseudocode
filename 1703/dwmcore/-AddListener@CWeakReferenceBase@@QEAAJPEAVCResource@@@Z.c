/*
 * XREFs of ?AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z @ 0x1800C1E28
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWeakReferenceBase::AddListener(CWeakReferenceBase *this, struct CResource *a2)
{
  char *v2; // r10
  int v3; // ebx
  struct CResource **v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v10; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h]
  struct CResource *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 16;
  v3 = 0;
  v4 = (struct CResource **)*((_QWORD *)this + 2);
  v5 = 0;
  if ( *((_DWORD *)v2 + 6) )
  {
    while ( a2 != *v4 )
    {
      ++v5;
      ++v4;
      if ( v5 >= *((_DWORD *)v2 + 6) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = *((unsigned int *)v2 + 6);
    v7 = v11;
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v6 + 1;
    v3 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v8 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v6) = v12;
      *((_DWORD *)v2 + 6) = v7;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x30u);
  }
  return (unsigned int)v3;
}
