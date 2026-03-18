/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180039F3C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x180038E10 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@.c)
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180038EB8 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180038F60 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVA.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180039008 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x1800390B0 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180039158 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801A2670 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801A2718 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int updated; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_DWORD *)a3 + 4) )
  {
    case 0x11:
      v5 = a5 != 4 ? 0x88980403 : 0;
      if ( a5 != 4 )
      {
        v9 = 94;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<bool>(this, a3, a4);
      v5 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 95;
LABEL_31:
      v8 = updated;
LABEL_53:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v9);
      return v5;
    case 0x12:
      v5 = a5 != 4 ? 0x88980403 : 0;
      if ( a5 != 4 )
      {
        v9 = 99;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<float>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 100;
        goto LABEL_31;
      }
      break;
    case 0x23:
      v5 = a5 != 8 ? 0x88980403 : 0;
      if ( a5 != 8 )
      {
        v9 = 104;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 105;
        goto LABEL_31;
      }
      break;
    case 0x34:
      v5 = a5 != 12 ? 0x88980403 : 0;
      if ( a5 != 12 )
      {
        v9 = 109;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 110;
        goto LABEL_31;
      }
      break;
    case 0x45:
      v5 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 != 16 )
      {
        v9 = 114;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 115;
        goto LABEL_31;
      }
      break;
    case 0x46:
      v5 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 != 16 )
      {
        v9 = 119;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 120;
        goto LABEL_31;
      }
      break;
    case 0x47:
      v5 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 != 16 )
      {
        v9 = 124;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 125;
        goto LABEL_31;
      }
      break;
    case 0x68:
      v5 = a5 != 24 ? 0x88980403 : 0;
      if ( a5 == 24 )
      {
        updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this, a3, a4);
        v5 = updated;
        if ( updated >= 0 )
          return 0;
        v9 = 130;
        goto LABEL_31;
      }
      v9 = 129;
LABEL_52:
      v8 = v5;
      goto LABEL_53;
    case 0x109:
      v5 = a5 != 64 ? 0x88980403 : 0;
      if ( a5 != 64 )
      {
        v9 = 134;
        goto LABEL_52;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
      v5 = updated;
      if ( updated < 0 )
      {
        v9 = 135;
        goto LABEL_31;
      }
      break;
    default:
      ModuleFailFastForHRESULT(2291663875LL, retaddr);
  }
  return 0;
}
