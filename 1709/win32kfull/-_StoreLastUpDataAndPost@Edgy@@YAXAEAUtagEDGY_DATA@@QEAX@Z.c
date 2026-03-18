/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01D2860 (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C01CA9E0 (_GetPointerDeviceType.c)
 *     ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01D1988 (-GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01D24D8 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01D26EC (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01D2A18 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(Edgy *this, struct tagEDGY_DATA *a2, void *const a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // esi
  const struct tagPOINTER_INFO *v7; // rax
  const unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  unsigned int *v10; // r9
  const struct tagPOINTER_INFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int IsLegacyDevice; // r15d
  int PointerDeviceType; // eax
  __int64 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-38h]
  _QWORD v21[3]; // [rsp+48h] [rbp-30h] BYREF

  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = (gdwMitConfig & 4) != 0 ? *((_DWORD *)a2 + 12) : *((_DWORD *)a2 + 10);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = (gdwMitConfig & 4) != 0
           ? CTouchProcessor::GetPointerInfo(gpTouchProcessor, a2, v6)
           : Edgy::GetPointerInfo(a2, (const struct tagPOINTERINPUTFRAME *)v6);
        v11 = v7;
        if ( v7 )
        {
          if ( (*((_DWORD *)v7 + 3) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v7 + 2), v8, v9, v10);
            if ( !IsLegacyDevice || *(_DWORD *)v11 == 3 )
            {
              PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v11 + 2), v12, v13, v14);
              v17 = Edgy::_HitTestEdgyRegion(
                      v21,
                      (unsigned int *)this,
                      *((_QWORD *)v11 + 2),
                      *((_QWORD *)v11 + 5),
                      PointerDeviceType,
                      IsLegacyDevice);
              v19 = *v17;
              v20 = v17[2];
              if ( *v17 )
                break;
            }
          }
        }
        if ( ++v6 >= v5 )
          return;
      }
      *((_QWORD *)this + 30) = *((_QWORD *)v11 + 2);
      *((_DWORD *)this + 62) = *((_DWORD *)v11 + 16);
      *((_QWORD *)this + 32) = *((_QWORD *)v11 + 5);
      if ( (_DWORD)v20 == 1 )
        Edgy::_PostEdgyInertia(*(_QWORD *)(v19 + 8), 1LL, *((unsigned int *)this + 63), v18);
    }
  }
}
