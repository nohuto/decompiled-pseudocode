/*
 * XREFs of ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18006841C
 * Callers:
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180063928 (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z @ 0x18003F92C (-HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z.c)
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800403DC (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800662A8 (-HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z.c)
 */

__int64 __fastcall HampActSetExternalResourcePriority(
        struct _HAM_ACTIVITY *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  int v4; // eax
  int v5; // edi
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  int v7; // esi
  ULONG v8; // edx
  unsigned __int64 v9; // rcx
  int v10; // edi
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  v4 = *((_DWORD *)a1 + 134);
  if ( (v4 & 1) != 0 )
  {
    v5 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 540) == 4 )
  {
    v5 = -1073741275;
  }
  else if ( (v4 & 8) != 0 )
  {
    v5 = -1058275327;
  }
  else
  {
    v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 134) = v4 | 1;
    HampHostReleaseLockExclusiveEx(v6);
    v5 = HampRmContextSetExternalResourcePriority(*((_QWORD **)a1 + 11), a2);
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
    *((_DWORD *)a1 + 134) &= ~1u;
    if ( v5 >= 0 )
    {
      HampUtilExternalAccessMaskFromMaskData((ULONG *)a1 + 122, &BitMapHeader);
      v7 = *(unsigned __int8 *)a2;
      v8 = v7 - 3;
      v9 = (unsigned int)(v7 - 3);
      if ( *((_BYTE *)a2 + 1) >= 0x65u )
      {
        v10 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v9);
        RtlClearBit(&BitMapHeader, v8);
      }
      else
      {
        v10 = !_bittest64((const signed __int64 *)BitMapHeader.Buffer, v9);
        RtlSetBit(&BitMapHeader, v8);
      }
      if ( v10 && v7 == 27 )
        HampHostCheckQueueInterruptiveUIChangeWorker(*((struct _HAM_APPLICATION ***)a1 + 10));
      v5 = 0;
    }
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  return (unsigned int)v5;
}
