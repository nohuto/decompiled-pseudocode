/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CE9A4
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE6AC (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C01A7E5C (_GetPointerDeviceType.c)
 *     ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01CD7F0 (-GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01CE328 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01CE538 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01CE864 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
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
  int IsLegacyDevice; // r15d
  int PointerDeviceType; // eax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+40h] [rbp-38h]
  _QWORD v17[3]; // [rsp+48h] [rbp-30h] BYREF

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
              PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v11 + 2));
              v14 = Edgy::_HitTestEdgyRegion(
                      v17,
                      (unsigned int *)this,
                      *((struct _LIST_ENTRY **)v11 + 2),
                      *((_QWORD *)v11 + 5),
                      PointerDeviceType,
                      IsLegacyDevice);
              v15 = *v14;
              v16 = v14[2];
              if ( *v14 )
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
      if ( (_DWORD)v16 == 1 )
        Edgy::_PostEdgyInertia(*(_QWORD *)(v15 + 8), 1u, *((_DWORD *)this + 63));
    }
  }
}
