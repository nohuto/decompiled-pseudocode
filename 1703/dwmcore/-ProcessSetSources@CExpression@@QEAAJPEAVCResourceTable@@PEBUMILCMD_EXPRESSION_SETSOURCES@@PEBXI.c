/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800326B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v9; // ebp
  unsigned int v10; // r14d
  struct CResource *ResourceWithoutType; // rax
  int WeakReferenceBase; // eax
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v17; // eax
  struct CWeakReferenceBase *v18; // [rsp+70h] [rbp+18h] BYREF

  if ( !*((_DWORD *)a3 + 2) )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x49u);
    goto LABEL_20;
  }
  if ( (*((_BYTE *)this + 512) & 1) != 0 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4Fu);
LABEL_20:
    if ( *((_DWORD *)a3 + 2) )
      *((_BYTE *)this + 512) |= 1u;
    return (unsigned int)v13;
  }
  v9 = 0;
  v10 = a5;
  while ( 1 )
  {
    v18 = 0LL;
    if ( *a4 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      if ( ResourceWithoutType )
      {
        WeakReferenceBase = CComposition::GetWeakReferenceBase(*((CComposition **)this + 2), ResourceWithoutType, &v18);
        v13 = WeakReferenceBase;
        if ( WeakReferenceBase < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x5Eu);
          goto LABEL_16;
        }
      }
    }
    v14 = *((unsigned int *)this + 84);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v10 = v14 + 1;
    v13 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( v15 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v10 > *((_DWORD *)this + 83) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 312, 8LL, 1LL, &v18);
      v13 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v14) = v18;
      *((_DWORD *)this + 84) = v10;
    }
    if ( v13 < 0 )
      break;
    ++a4;
    if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 2) )
    {
      v13 = 0;
      goto LABEL_16;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x61u);
LABEL_16:
  if ( v13 < 0 )
    goto LABEL_20;
  return (unsigned int)v13;
}
