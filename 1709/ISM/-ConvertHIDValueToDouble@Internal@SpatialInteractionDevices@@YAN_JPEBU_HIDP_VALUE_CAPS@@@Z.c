/*
 * XREFs of ?ConvertHIDValueToDouble@Internal@SpatialInteractionDevices@@YAN_JPEBU_HIDP_VALUE_CAPS@@@Z @ 0x18007CE74
 * Callers:
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT2_2_ @ 0x180079ED4 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT2_2_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x180079F94 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT4_4_.c)
 *     SpatialInteractionDevices::ReadKnownFloats_float_1_ @ 0x18007A054 (SpatialInteractionDevices--ReadKnownFloats_float_1_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x18007A7A0 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x18007A93C (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x18007CC74 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 * Callees:
 *     <none>
 */

double __fastcall SpatialInteractionDevices::Internal::ConvertHIDValueToDouble(
        SpatialInteractionDevices::Internal *this,
        __int64 a2,
        const struct _HIDP_VALUE_CAPS *a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  double result; // xmm0_8
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  double v18; // xmm2_8
  double v19; // xmm4_8
  double v20; // xmm3_8
  char v21; // cl
  double v22; // xmm1_8

  v3 = *(_DWORD *)(a2 + 32);
  v4 = (int)this;
  if ( v3 )
  {
    result = (double)(int)this;
    if ( *(int *)(a2 + 40) >= 0 && (__int64)this < 0 )
      result = result + 1.844674407370955e19;
    if ( v3 > 8 )
    {
      v12 = v3 - 9;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                    return result * 0.1;
                }
                else
                {
                  return result * 0.01;
                }
              }
              else
              {
                return result * 0.001;
              }
            }
            else
            {
              return result * 0.0001;
            }
          }
          else
          {
            return result * 0.00001;
          }
        }
        else
        {
          return result * 0.000001;
        }
      }
      else
      {
        return result * 0.0000001;
      }
    }
    else if ( v3 == 8 )
    {
      return result * 0.00000001;
    }
    else
    {
      v6 = v3 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  if ( v11 == 1 )
                    return result * 10000000.0;
                }
                else
                {
                  return result * 1000000.0;
                }
              }
              else
              {
                return result * 100000.0;
              }
            }
            else
            {
              return result * 10000.0;
            }
          }
          else
          {
            return result * 1000.0;
          }
        }
        else
        {
          return result * 100.0;
        }
      }
      else
      {
        return result * 10.0;
      }
    }
  }
  else
  {
    v18 = 0.0;
    if ( *(_DWORD *)(a2 + 48) )
      v19 = (float)*(int *)(a2 + 48);
    else
      v19 = 0.0;
    if ( *(_DWORD *)(a2 + 52) )
      v20 = (float)*(int *)(a2 + 52);
    else
      v20 = DOUBLE_1_0;
    if ( v19 >= v20 )
      return DOUBLE_N2_147418113e9;
    if ( *(_DWORD *)(a2 + 40) )
      v18 = (float)*(int *)(a2 + 40);
    v21 = *(_BYTE *)(a2 + 18);
    v22 = *(_DWORD *)(a2 + 44) ? (double)(*(_DWORD *)(a2 + 44) & ~(-1 << v21)) : (double)~(-1 << v21);
    if ( v18 >= v22 )
      return DOUBLE_N2_147418113e9;
    else
      return ((double)v4 - v18) / (v22 - v18) * (v20 - v19) + v19;
  }
  return result;
}
