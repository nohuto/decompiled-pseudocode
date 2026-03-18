/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0153320
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145E50 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v2 = (__int64 *)((char *)this + 88);
  v3 = 4LL;
  do
  {
    if ( *v2 )
      Win32FreePool(*v2);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    Win32FreePool(v5);
}
