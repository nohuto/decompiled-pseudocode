/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180049A24
 * Callers:
 *     ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180009708 (-AddInterface@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotif.c)
 *     ?RemoveInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180049934 (-RemoveInterface@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNo.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800A53B4 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800A5554 (--1CVolumeStrip@@MEAA@XZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v6; // rax
  size_t v7; // r10
  const void *v8; // rcx
  void *v9; // r9

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    ATL::AtlThrowImpl(-2147024809);
  if ( v4 != v2 )
  {
    v6 = *a1;
    v7 = 4 * (v4 - v2);
    v8 = (const void *)(*a1 + 4 * v2);
    v9 = (void *)(v6 + 4 * a2);
    if ( v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)_o__errno(v8, a2, v4, v9) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v9, v8, v7);
      v4 = a1[1];
    }
  }
  result = v4 - 1;
  a1[1] = v4 - 1;
  return result;
}
