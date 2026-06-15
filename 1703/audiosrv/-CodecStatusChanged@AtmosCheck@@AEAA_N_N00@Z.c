/*
 * XREFs of ?CodecStatusChanged@AtmosCheck@@AEAA_N_N00@Z @ 0x18002620C
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CD78 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAA_NXZ.c)
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ @ 0x18003CDAC (-IsMatEncoderEnabled@AtmosCheck@@QEAA_NXZ.c)
 */

bool __fastcall AtmosCheck::CodecStatusChanged(AtmosCheck *this, char a2, char a3, char a4)
{
  char v8; // si
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v8 = *((_BYTE *)this + 73);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return a2 != v8 || a3 != AtmosCheck::IsMatEncoderEnabled(this) || a4 != AtmosCheck::IsHeadphonesEncoderEnabled(this);
}
