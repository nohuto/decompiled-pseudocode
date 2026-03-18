/*
 * XREFs of ?GetResourceTypeString@CAnimationLoggingManager@@AEAAPEBGW4MIL_RESOURCE_TYPE@@@Z @ 0x180156C78
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall CAnimationLoggingManager::GetResourceTypeString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx

  if ( a2 <= 55 )
  {
    if ( a2 == 55 )
      return L"Geometry";
    if ( a2 > 33 )
    {
      if ( a2 > 47 )
      {
        v17 = a2 - 48;
        if ( !v17 )
          return L"Expression";
        v18 = v17 - 1;
        if ( !v18 )
          return L"Filter Effect";
        v19 = v18 - 1;
        if ( !v19 )
          return L"Flip Chain";
        v20 = v19 - 1;
        if ( !v20 )
          return L"Flood Effect";
        if ( v20 == 1 )
          return L"Gaussian Blur Effect";
      }
      else
      {
        if ( a2 == 47 )
          return L"Effect Group";
        v12 = a2 - 34;
        if ( !v12 )
          return L"Spot Light";
        v13 = v12 - 1;
        if ( !v13 )
          return L"Surface Bitmap";
        v14 = v13 - 1;
        if ( !v14 )
          return L"Conditional Expression";
        v15 = v14 - 8;
        if ( !v15 )
          return L"Drop Shadow";
        v16 = v15 - 1;
        if ( !v16 )
          return L"Effect";
        if ( v16 == 1 )
          return L"Effect Brush";
      }
    }
    else
    {
      if ( a2 == 33 )
        return L"Skybox Brush";
      if ( a2 > 26 )
      {
        v8 = a2 - 28;
        if ( !v8 )
          return L"Cube Map";
        v9 = v8 - 1;
        if ( !v9 )
          return L"Distant Light";
        v10 = v9 - 1;
        if ( !v10 )
          return L"CompositionLight";
        v11 = v10 - 1;
        if ( !v11 )
          return L"Point Light";
        if ( v11 == 1 )
          return L"Shadow";
      }
      else
      {
        if ( a2 == 26 )
          return L"Ambient Light";
        v2 = a2 - 8;
        if ( !v2 )
          return L"Backdrop Brush";
        v3 = v2 - 2;
        if ( !v3 )
          return L"Base Expression";
        v4 = v3 - 6;
        if ( !v4 )
          return L"Color Brush";
        v5 = v4 - 7;
        if ( !v5 )
          return L"ComponentTransform2D";
        v6 = v5 - 1;
        if ( !v6 )
          return L"ComponentTransform3D";
        if ( v6 == 1 )
          return L"Composite Effect";
      }
    }
    return L"Unknown Resource Type";
  }
  if ( a2 <= 86 )
  {
    if ( a2 == 86 )
      return L"ManipulationTransform";
    if ( a2 > 76 )
    {
      v26 = a2 - 77;
      if ( !v26 )
        return L"Interaction Tracker";
      v27 = v26 - 1;
      if ( !v27 )
        return L"Keyframe Animation";
      v28 = v27 - 1;
      if ( !v28 )
        return L"Layer Visual";
      v29 = v28 - 2;
      if ( !v29 )
        return L"Linear Gradient Brush";
      if ( v29 == 4 )
        return L"Manipulation";
    }
    else
    {
      if ( a2 == 76 )
        return L"Interaction";
      v21 = a2 - 56;
      if ( !v21 )
        return L"Geometry2D";
      v22 = v21 - 1;
      if ( !v22 )
        return L"Geometry2D Group";
      v23 = v22 - 1;
      if ( !v23 )
        return L"Geometry Group";
      v24 = v23 - 1;
      if ( !v24 )
        return L"Gradient Brush";
      v25 = v24 - 8;
      if ( !v25 )
        return L"Hover Pointer Source";
      if ( v25 == 8 )
        return L"Ink";
    }
    return L"Unknown Resource Type";
  }
  if ( a2 <= 103 )
  {
    if ( a2 == 103 )
      return L"Rectangle Geometry";
    v30 = a2 - 87;
    if ( !v30 )
      return L"Mask Brush";
    v31 = v30 - 5;
    if ( !v31 )
      return L"NaturalAnimation";
    v32 = v31 - 1;
    if ( !v32 )
      return L"Nine Grid Brush";
    v33 = v32 - 7;
    if ( !v33 )
      return L"Property Set";
    if ( v33 == 1 )
      return L"Property Set (Base)";
    return L"Unknown Resource Type";
  }
  v34 = a2 - 112;
  if ( !v34 )
    return L"Saturation Effect";
  v35 = v34 - 5;
  if ( !v35 )
    return L"Shadow Effect";
  v36 = v35 - 6;
  if ( !v36 )
    return L"Sprite Visual";
  v37 = v36 - 1;
  if ( !v37 )
    return L"Surface Brush";
  if ( v37 != 10 )
    return L"Unknown Resource Type";
  return L"Visual";
}
