/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009360
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000A2E0 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[23];
  if ( v4 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 48) )
    {
      do
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[23] + v9++));
      while ( v9 < *((_DWORD *)this + 48) );
      v4 = this[23];
    }
    Win32FreePool(v4);
    this[23] = 0LL;
    this[24] = 0LL;
  }
  v5 = this[15];
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    this[15] = 0LL;
    this[17] = 0LL;
    this[16] = 0LL;
    *((_DWORD *)this + 36) = 0;
  }
  v6 = this[37];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)((char *)v6 + 16));
    this[37] = 0LL;
  }
  v7 = this[19];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[19] = 0LL;
    this[20] = 0LL;
    this[21] = 0LL;
  }
  v8 = this[25];
  if ( v8 )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 52) )
    {
      do
      {
        v11 = v10++;
        v12 = *((_QWORD *)this[25] + 2 * v11);
        --*(_DWORD *)(v12 + 20);
      }
      while ( v10 < *((_DWORD *)this + 52) );
      v8 = this[25];
    }
    Win32FreePool(v8);
    this[25] = 0LL;
    this[26] = 0LL;
  }
}
