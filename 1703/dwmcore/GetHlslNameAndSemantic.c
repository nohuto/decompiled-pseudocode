/*
 * XREFs of GetHlslNameAndSemantic @ 0x1800B8590
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800B842C (InitializeShaderLinkingInput.c)
 * Callees:
 *     <none>
 */

void __fastcall GetHlslNameAndSemantic(unsigned __int16 a1, _QWORD *a2, const char **a3)
{
  const char *v3; // rax

  if ( a1 > 6u )
  {
    switch ( a1 )
    {
      case 7u:
        *a2 = "ClipPlanesW";
        v3 = "CLIPPLANES1";
        goto LABEL_12;
      case 8u:
        *a2 = "RejectDistance0";
        v3 = "CLIPPLANES2";
        goto LABEL_12;
      case 9u:
        *a2 = "PositionW";
        v3 = "CLIPPLANES3";
        goto LABEL_12;
      case 0x100u:
        *a2 = "uv0";
        v3 = "TEXCOORD0";
        goto LABEL_12;
      case 0x101u:
        *a2 = "uv1";
        v3 = "TEXCOORD1";
        goto LABEL_12;
      case 0x102u:
        *a2 = "uv2";
        v3 = "TEXCOORD2";
        goto LABEL_12;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 6u:
        *a2 = "XYDot";
        v3 = "CLIPPLANES0";
        goto LABEL_12;
      case 0u:
        *a2 = "position";
        v3 = "SV_POSITION";
LABEL_12:
        *a3 = v3;
        return;
      case 1u:
        *a2 = "color";
        v3 = "COLOR0";
        goto LABEL_12;
      case 2u:
        *a2 = "XYZ_Light0Space";
        v3 = "LIGHTINGDATA0";
        goto LABEL_12;
      case 3u:
        *a2 = "NormalXYZ_Light0Space";
        v3 = "LIGHTINGDATA1";
        goto LABEL_12;
      case 4u:
        *a2 = "XYZ_Light1Space";
        v3 = "LIGHTINGDATA2";
        goto LABEL_12;
      case 5u:
        *a2 = "NormalXYZ_Light1Space";
        v3 = "LIGHTINGDATA3";
        goto LABEL_12;
    }
  }
  *a2 = 0LL;
  *a3 = 0LL;
}
