/*
 * XREFs of ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800EF5CC
 * Callers:
 *     ?BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800EEF70 (-BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJ_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x1800EEFB8 (-CreateInstance@TelephonyControllerCallInstance@@SAJ_KPEAUIKsControl@@PEAU_TelephonyInstanceData.c)
 *     ?EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800EF100 (-EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?ProviderChange@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EF330 (-ProviderChange@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTyp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyControllerCallInstance::VerifyAndSetCallType(
        TelephonyControllerCallInstance *this,
        struct _TelephonyInstanceData *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        *((_DWORD *)this + 12) = 1;
      }
      else if ( *(_DWORD *)a2 == 2 )
      {
        *((_DWORD *)this + 12) = 2;
      }
      else
      {
        return (unsigned int)-2147023728;
      }
    }
    else
    {
      *((_DWORD *)this + 12) = 0;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
