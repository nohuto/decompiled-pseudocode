/*
 * XREFs of DisplayGenAddr @ 0x1C00043A0
 * Callers:
 *     Display_PCT_PTC @ 0x1C00036E8 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0003D14 (Display_CST.c)
 *     Display_CPC @ 0x1C000420C (Display_CPC.c)
 *     Display_LPI @ 0x1C00045E0 (Display_LPI.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x1C0002764 (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x1C00028E4 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_sx @ 0x1C0002F3C (WPP_RECORDER_SF_sx.c)
 */

unsigned __int8 __fastcall DisplayGenAddr(char *a1, const char *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 result; // al
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  const char *v14; // rax
  unsigned __int16 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( *a1 == 126 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_sD(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x94u,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
               a2,
               *((_DWORD *)a1 + 1));
  }
  else if ( result || *(_QWORD *)(a1 + 4) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v8 = result;
      if ( result )
      {
        v9 = result - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 6;
                if ( v13 )
                {
                  if ( v13 == 117 )
                    v14 = "FFH";
                  else
                    v14 = "Unknown";
                }
                else
                {
                  v14 = "PCC";
                }
              }
              else
              {
                v14 = "SM Bus";
              }
            }
            else
            {
              v14 = "EC Space";
            }
          }
          else
          {
            v14 = "Pci Config";
          }
        }
        else
        {
          v14 = "I/O";
        }
      }
      else
      {
        v14 = "Memory";
      }
      result = WPP_RECORDER_SF_sDs((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, a3, a4, v19, a2, v8, v14);
      v7 = WPP_GLOBAL_Control;
    }
    if ( LOWORD(v7->DeviceType) )
    {
      LODWORD(v21) = (unsigned __int8)a1[1];
      result = WPP_RECORDER_SF_sD(
                 (__int64)v7->DeviceExtension,
                 5u,
                 2u,
                 0x97u,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                 a2,
                 v21);
      v7 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v21) = (unsigned __int8)a1[2];
        result = WPP_RECORDER_SF_sD(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x98u,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   a2,
                   v21);
        v7 = WPP_GLOBAL_Control;
      }
    }
    if ( *a1 == 10 )
    {
      if ( !LOWORD(v7->DeviceType) )
        return result;
      v15 = 153;
    }
    else
    {
      if ( !LOWORD(v7->DeviceType) )
        return result;
      v15 = 154;
    }
    LODWORD(v21) = (unsigned __int8)a1[3];
    result = WPP_RECORDER_SF_sD(
               (__int64)v7->DeviceExtension,
               5u,
               2u,
               v15,
               (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
               a2,
               v21);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_sx((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v20, a2);
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             2u,
             0x95u,
             (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
             a2);
  }
  return result;
}
