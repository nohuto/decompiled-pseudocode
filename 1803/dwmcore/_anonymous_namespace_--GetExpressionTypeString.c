/*
 * XREFs of _anonymous_namespace_::GetExpressionTypeString @ 0x18017FE54
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     _anonymous_namespace_::SynthesizeDescription @ 0x180181288 (_anonymous_namespace_--SynthesizeDescription.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::GetExpressionTypeString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 <= 69 )
  {
    if ( a1 == 69 )
      return L"Vector4";
    v1 = a1 - 17;
    if ( !v1 )
      return L"Bool";
    v2 = v1 - 1;
    if ( !v2 )
      return L"Scalar";
    v3 = v2 - 17;
    if ( !v3 )
      return L"Vector2";
    v4 = v3 - 7;
    if ( !v4 )
      return L"TimeSpan";
    if ( v4 == 10 )
      return L"Vector3";
    return L"Unknown Resource Type";
  }
  v6 = a1 - 70;
  if ( !v6 )
    return L"Color";
  v7 = v6 - 1;
  if ( !v7 )
    return L"Quaternion";
  v8 = v7 - 33;
  if ( !v8 )
    return L"Matrix3x2";
  if ( v8 != 161 )
    return L"Unknown Resource Type";
  return L"Matrix4x4";
}
