/*
 * XREFs of ?QueryInterface@ControllerNavigationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C5A0
 * Callers:
 *     ?QueryInterface@ControllerNavigationManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CFF0 (-QueryInterface@ControllerNavigationManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall ControllerNavigationManager::QueryInterface(
        ControllerNavigationManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char v4; // al
  int v5; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_656bebd9_ea24_478d_90ff_8f5a94ff8f09.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_656bebd9_ea24_478d_90ff_8f5a94ff8f09.Data4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    }
    else
    {
      v4 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 256;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v4 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 239;
LABEL_12:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v5, v4);
    }
  }
  return v3;
}
