/*
 * XREFs of IsSidebandIrp @ 0x1C0006E64
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C0017EC0 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall IsSidebandIrp(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *v2; // rsi
  unsigned int v3; // ebx
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v5; // rdx
  char *Context; // rdi
  char v7; // al
  __int64 v8; // rbp
  KSPIN_LOCK *v9; // rsi
  KIRQL v10; // al
  _QWORD **v11; // rdi
  KIRQL v12; // dl
  _QWORD *i; // rax

  v2 = *(char **)(a2 + 184);
  v3 = 0;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(a1);
  if ( DeviceForDeviceObject )
  {
    Context = (char *)DeviceForDeviceObject->Context;
    v7 = *v2;
    if ( *v2 )
    {
      if ( v7 == 2 || (unsigned __int8)(v7 - 14) <= 1u )
      {
        v8 = *((_QWORD *)v2 + 6);
        v9 = (KSPIN_LOCK *)(Context + 936);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 117);
        v11 = (_QWORD **)(Context + 920);
        v12 = v10;
        for ( i = *v11; i != v11; i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v8 )
          {
            v3 = 1;
            break;
          }
        }
        KeReleaseSpinLock(v9, v12);
      }
    }
    else
    {
      LOBYTE(v3) = RtlCompareUnicodeString((PCUNICODE_STRING)(*((_QWORD *)v2 + 6) + 88LL), &String2, 1u) == 0;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x10u,
      (__int64)&WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids);
  }
  return v3;
}
