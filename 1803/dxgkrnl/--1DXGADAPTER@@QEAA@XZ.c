/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C0147AB8
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C003276C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00251A0 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00251D0 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C0096008 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  char *v10; // rcx
  char *v11; // rbx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[307];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[307] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[308];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[308] = 0LL;
  }
  v4 = (struct _ERESOURCE *)this[29];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(this[29]);
    this[29] = 0LL;
  }
  v5 = (struct _ERESOURCE *)this[18];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(this[18]);
    this[18] = 0LL;
  }
  v6 = this[312];
  if ( v6 )
  {
    operator delete[](v6);
    this[312] = 0LL;
  }
  v7 = this[476];
  if ( v7 )
    operator delete[](v7);
  v8 = this[506];
  if ( v8 )
    operator delete[](v8);
  v9 = this[508];
  if ( v9 )
    operator delete[](v9);
  if ( this[295] )
  {
    DXGADAPTER::DestroyPhysicalAdapterData((DXGADAPTER *)this);
    v10 = (char *)this[295];
    if ( v10 )
    {
      v11 = v10 - 8;
      `vector destructor iterator'(
        v10,
        352LL,
        *((_QWORD *)v10 - 1),
        (void (__fastcall *)(char *))DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket);
      operator delete[](v11);
    }
    this[295] = 0LL;
  }
  operator delete(this[514]);
  this[2] = 0LL;
}
