/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180032568
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x180034CFC (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4,
        unsigned int a5)
{
  int v8; // ebp
  char *v10; // r12
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct CBaseExpression *v16; // rdx
  __int64 v17; // rcx
  CResource *v18; // rcx
  int v19; // eax
  int v21; // eax

  if ( *((_DWORD *)a3 + 2) )
  {
    v8 = 0;
    v10 = (char *)this + 376;
    while ( 1 )
    {
      v11 = *((unsigned int *)v10 + 6);
      v12 = v11 + 1;
      if ( (int)v11 + 1 >= (unsigned int)v11 )
        a5 = v11 + 1;
      v13 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      if ( v12 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
      }
      else if ( a5 > *((_DWORD *)v10 + 5) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet(v10, 24LL, 1LL, a4);
        v13 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      }
      else
      {
        v14 = *(_QWORD *)v10;
        v15 = 3 * v11;
        *(_OWORD *)(v14 + 8 * v15) = *(_OWORD *)a4;
        *(_QWORD *)(v14 + 8 * v15 + 16) = a4[2];
        *((_DWORD *)v10 + 6) = a5;
      }
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x94u);
        return (unsigned int)v13;
      }
      if ( (*((_BYTE *)this + 208) & 2) != 0 || *((_QWORD *)this + 63) )
        break;
LABEL_18:
      a4 += 3;
      if ( (unsigned int)++v8 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v16 = this;
    if ( *((_QWORD *)this + 63) )
      v16 = (struct CBaseExpression *)*((_QWORD *)this + 63);
    v17 = *(_QWORD *)(*((_QWORD *)this + 39) + 8LL * *((unsigned int *)a4 + 5));
    if ( v17 )
    {
      v18 = *(CResource **)(v17 + 8);
      if ( v18 )
      {
        v19 = CResource::AddSourceAnimation(v18, v16, *(_DWORD *)a4);
        v13 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x18Fu);
LABEL_17:
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA1u);
            return (unsigned int)v13;
          }
          goto LABEL_18;
        }
        *((_BYTE *)this + 512) |= 2u;
      }
    }
    v13 = 0;
    goto LABEL_17;
  }
  v13 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8Eu);
  return (unsigned int)v13;
}
