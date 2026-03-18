/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C001E460
 * Callers:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C001DD64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DEA8 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C001ED38 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C0025C00 (-Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0141368 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01417D0 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C0141FF0 (-AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143F70 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0146080 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rcx
  signed int v7; // ebx
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // kr00_8

  v3 = *((_QWORD *)this + 4);
  v5 = -1LL;
  if ( v3 + a2 >= v3 )
    v5 = v3 + a2;
  v7 = v3 + a2 < v3 ? 0xC0000095 : 0;
  if ( v3 + a2 >= v3 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( v5 > v8 )
    {
      if ( !v8 )
        v8 = 64LL;
      while ( v8 < v5 && v8 < 0x400 )
      {
        v15 = v8;
        v8 *= 2LL;
        if ( !is_mul_ok(v15, 2uLL) )
        {
          v8 = -1LL;
          v7 = -1073741675;
          break;
        }
        v7 = 0;
      }
      if ( v7 < 0 )
        return (unsigned int)-1073741801;
      while ( v8 < v5 )
      {
        if ( v8 + 1024 < v8 )
        {
          v8 = -1LL;
          v7 = -1073741675;
          break;
        }
        v8 += 1024LL;
        v7 = 0;
      }
      if ( v7 < 0 )
        return (unsigned int)-1073741801;
      v10 = v8 * *((_QWORD *)this + 5);
      if ( !is_mul_ok(v8, *((_QWORD *)this + 5)) )
        return (unsigned int)-1073741801;
      v7 = 0;
      if ( *((_BYTE *)this + 16) )
        v11 = Win32AllocPoolWithQuota(v10, a3);
      else
        v11 = Win32AllocPool(v10, a3);
      v12 = (char *)v11;
      if ( !v11 )
        v7 = -1073741801;
      if ( v7 < 0 )
        return (unsigned int)-1073741801;
      v13 = *((_QWORD *)this + 4);
      if ( v13 )
        memmove(v12, *((const void **)this + 1), v13 * *((_QWORD *)this + 5));
      memset(
        &v12[*((_QWORD *)this + 4) * *((_QWORD *)this + 5)],
        0,
        *((_QWORD *)this + 5) * (v8 - *((_QWORD *)this + 4)));
      v14 = *((_QWORD *)this + 1);
      if ( v14 )
        Win32FreePool(v14);
      *((_QWORD *)this + 1) = v12;
      *((_QWORD *)this + 3) = v8;
    }
  }
  if ( v7 < 0 )
    return (unsigned int)-1073741801;
  *((_QWORD *)this + 4) += a2;
  return (unsigned int)v7;
}
