/*
 * XREFs of NetPacketExtensionAllocate @ 0x1C00FC070
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     FindExtensionByName @ 0x1C00FB9F4 (FindExtensionByName.c)
 *     ?InsertExtension@@YAXPEAUNET_PACKET_EXTENSION@@@Z @ 0x1C00FBAB4 (-InsertExtension@@YAXPEAUNET_PACKET_EXTENSION@@@Z.c)
 *     ?QueueStateUpdates@@YAXXZ @ 0x1C00FBE84 (-QueueStateUpdates@@YAXXZ.c)
 */

struct NET_PACKET_EXTENSION *__fastcall NetPacketExtensionAllocate(
        _WORD *Src,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        __int64 a5,
        size_t a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v13; // rax
  size_t v14; // r14
  SIZE_T v15; // rdx
  struct NET_PACKET_EXTENSION *PoolWithTag; // rax
  struct NET_PACKET_EXTENSION *v17; // rbx

  if ( ((a3 - 1) & a3) != 0 || a3 > 0x40 || a2 > 0x400 || FindExtensionByName((__int64)Src) )
    return 0LL;
  v13 = -1LL;
  do
    ++v13;
  while ( Src[v13] );
  v14 = 2 * v13 + 2;
  v15 = 2 * v13 + 74;
  if ( v15 >= 0x48
    && (PoolWithTag = (struct NET_PACKET_EXTENSION *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x7845784Eu),
        (v17 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    *(_QWORD *)&v17->Size = 0LL;
    v17->Name = 0LL;
    v17->Version = 0;
    LOBYTE(v17->Alignment) = 0;
    v17->ExtensionSize = 0LL;
    *(_QWORD *)&v17[1].Size = 0LL;
    v17[1].Name = 0LL;
    *(_QWORD *)&v17[1].Version = 0LL;
    v17[1].ExtensionSize = 0LL;
    *(_QWORD *)&v17[2].Size = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
    return 0LL;
  *(_QWORD *)&v17[1].Version = a5;
  v17[1].ExtensionSize = a6;
  *(_QWORD *)&v17[2].Size = a7;
  *(_QWORD *)&v17->Size = (char *)v17 + 72;
  LODWORD(v17->Name) = a2;
  HIDWORD(v17->Name) = a3;
  v17->Version = 0;
  LOBYTE(v17->Alignment) = 0;
  *(_QWORD *)&v17[1].Size = a8;
  v17[1].Name = a4;
  memmove(&v17[2].Name, Src, v14);
  InsertExtension(v17);
  QueueStateUpdates();
  return v17;
}
