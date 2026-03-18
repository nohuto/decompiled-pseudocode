/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0027238
 * Callers:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0027040 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C002717C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C002A86C (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C007C410 (-Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0140898 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0140D2C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0141558 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0142F00 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01437E0 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0145AB0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // kr00_8

  v3 = *((_QWORD *)this + 3);
  v5 = -1LL;
  if ( v3 + a2 >= v3 )
    v5 = v3 + a2;
  v7 = v3 + a2 < v3 ? 0xC0000095 : 0;
  if ( v3 + a2 >= v3 )
  {
    v8 = *((_QWORD *)this + 2);
    if ( v5 > v8 )
    {
      if ( !v8 )
        v8 = 64LL;
      while ( v8 < v5 && v8 < 0x400 )
      {
        v16 = v8;
        v8 *= 2LL;
        if ( !is_mul_ok(v16, 2uLL) )
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
      if ( v7 < 0 || !is_mul_ok(v8, *((_QWORD *)this + 4)) )
        return (unsigned int)-1073741801;
      v10 = v8 * *((_QWORD *)this + 4);
      v11 = *((_BYTE *)this + 8) ? Win32AllocPoolWithQuota(v10, a3) : Win32AllocPool(v10, a3);
      v12 = (char *)v11;
      v7 = v11 == 0 ? 0xC0000017 : 0;
      if ( !v11 )
        return (unsigned int)-1073741801;
      v13 = *((_QWORD *)this + 3);
      if ( v13 )
        memmove(v12, *(const void **)this, v13 * *((_QWORD *)this + 4));
      memset(
        &v12[*((_QWORD *)this + 3) * *((_QWORD *)this + 4)],
        0,
        *((_QWORD *)this + 4) * (v8 - *((_QWORD *)this + 3)));
      if ( *(_QWORD *)this )
        Win32FreePool(*(_QWORD *)this, v14, v15);
      *(_QWORD *)this = v12;
      *((_QWORD *)this + 2) = v8;
    }
  }
  if ( v7 < 0 )
    return (unsigned int)-1073741801;
  *((_QWORD *)this + 3) += a2;
  return (unsigned int)v7;
}
