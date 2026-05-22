/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x1800893A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180089550 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x18008A024 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x18008A2E8 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        struct RIMDevice **a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        RIMDeviceCollection *a8)
{
  int v11; // r8d
  char v12; // al
  unsigned int v13; // edx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  void *v16; // rcx
  int CallbackStatic; // eax
  __int64 v18; // rcx
  int v19; // r9d
  void *v20; // rcx
  struct RIMDevice **v21; // [rsp+20h] [rbp-18h]

  v11 = a3 - 2;
  if ( v11 )
  {
    if ( v11 != 1 )
      return;
    v12 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      McTemplateU0qqq((__int64)a1, &MinInput_Log_RIMDeviceClosed, 2, (int)a1, (char)a2);
      v12 = Microsoft_OneCore_MinInputEnableBits;
    }
    v13 = 0;
    v14 = (__int64 *)((char *)a8 + 624);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( *(struct RIMDevice ***)(v15 + 16) == a2 || !*(_DWORD *)(v15 + 40) )
          break;
      }
      ++v13;
      ++v14;
      if ( v13 >= 0x100 )
      {
        if ( (v12 & 2) != 0 )
          McTemplateU0qqq((__int64)v14, &MinInput_Warning_CheckResult, 2, 368, 144);
        return;
      }
    }
    v16 = (void *)*((_QWORD *)a8 + 5);
    if ( v16 )
    {
      if ( !WaitForSingleObject(v16, 0) )
      {
        *((_BYTE *)a8 + 2736) = 1;
        CallbackStatic = RIMDeviceCollection::OnReadCallbackStatic(a8, 0, 0LL);
        if ( CallbackStatic < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return;
          v19 = 393;
LABEL_27:
          McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 2, v19, CallbackStatic);
          return;
        }
      }
    }
    CallbackStatic = RIMDeviceCollection::DetachDevice(a8, (struct RIMDevice *)v15);
    if ( CallbackStatic < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v19 = 397;
      goto LABEL_27;
    }
  }
  else
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0qqq((__int64)a1, &MinInput_Log_RIMDeviceOpened, 2, (int)a1, (char)a2);
    if ( !*((_QWORD *)a8 + 10) )
      *((_QWORD *)a8 + 10) = a1;
    CallbackStatic = RIMDeviceCollection::AttachDevice(a8, a1, a2, a4, v21);
    if ( CallbackStatic < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return;
      v19 = 342;
      goto LABEL_27;
    }
    v20 = (void *)*((_QWORD *)a8 + 7);
    if ( v20 )
    {
      *((_BYTE *)a8 + 2736) = 1;
      SetEvent(v20);
    }
  }
}
