/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00A8320
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C00A8210 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     IsMiniportDriverCCDSupport @ 0x1C00A83AC (IsMiniportDriverCCDSupport.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v7; // r9
  __int64 v9; // rax

  v3 = (int)a1;
  v4 = 0;
  v7 = (unsigned int)(a1 - 1);
  switch ( (_DWORD)a1 )
  {
    case 1:
      goto LABEL_8;
    case 2:
      *a3 = 2;
      return v4;
    case 3:
      *a3 = 3;
      return v4;
    case 4:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 4;
        return v4;
      }
LABEL_8:
      DxgkGetAdapterDefaultScaling(a2, a3, a3, v7);
      return v4;
    case 5:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 5;
        return v4;
      }
      goto LABEL_8;
    case 0x80:
      *a3 = 253;
      break;
    default:
      v9 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v9 + 24) = v3;
      WdLogEvent5_WdError(v9);
      return (unsigned int)-1073741811;
  }
  return v4;
}
