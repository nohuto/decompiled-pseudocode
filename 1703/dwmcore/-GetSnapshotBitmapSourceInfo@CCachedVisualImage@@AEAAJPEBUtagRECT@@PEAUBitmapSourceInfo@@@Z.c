/*
 * XREFs of ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180047D8C
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetSnapshotBitmapSourceInfo(
        CCachedVisualImage *this,
        const struct tagRECT *a2,
        struct BitmapSourceInfo *a3)
{
  LONG left; // r14d
  LONG top; // r15d
  LONG right; // r12d
  LONG bottom; // r13d
  int CurrentDisplaySet; // eax
  unsigned int v9; // edi
  CDisplaySet *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  char IsEmpty; // r10
  struct CDisplay *v14; // rbx
  LONG *v15; // rcx
  void (__fastcall **v16)(struct CDisplay *); // rax
  int PrimaryDisplay; // eax
  struct CDisplay *v19; // [rsp+30h] [rbp-30h] BYREF
  CDisplaySet *v20; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v22[4]; // [rsp+48h] [rbp-18h] BYREF

  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v20 = 0LL;
  v19 = 0LL;
  v22[0] = left;
  v22[1] = top;
  v22[2] = right;
  v22[3] = bottom;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v20);
  v9 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x441u);
    goto LABEL_12;
  }
  v10 = v20;
  if ( *((_DWORD *)v20 + 18) )
  {
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v22, 0LL, v20, *((_QWORD *)v20 + 6));
    while ( 1 )
    {
      v14 = *(struct CDisplay **)(v12 + 8 * v11);
      if ( !IsEmpty
        && !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((char *)v14 + 96, v11, v10, v12)
        && right > *v15
        && v15[2] > left
        && bottom > v15[1]
        && v15[3] > top )
      {
        break;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)v10 + 18) )
        goto LABEL_14;
    }
    v16 = *(void (__fastcall ***)(struct CDisplay *))v14;
    v19 = v14;
    (*v16)(v14);
  }
  else
  {
LABEL_14:
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v10, &v19);
    v9 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x456u);
      goto LABEL_12;
    }
    v14 = v19;
  }
  *(_QWORD *)a3 = *((_QWORD *)v14 + 28);
  *((_DWORD *)a3 + 2) = *(_DWORD *)CDisplay::GetDisplayId(v14, v21);
LABEL_12:
  ReleaseInterface<CDisplaySet const>(&v20);
  ReleaseInterface<CDisplay const>(&v19);
  return v9;
}
