/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C0199FA4
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

__int64 __fastcall PointerFrameList::SetPointerInfoNodeMessagePosted(PointerFrameList *this)
{
  struct _LIST_ENTRY *FrameById; // r8
  int v3; // r9d
  int v4; // r10d
  __int64 v5; // r11
  int *v6; // rdx
  int v7; // eax
  int v8; // eax

  if ( !this )
    return 0LL;
  FrameById = FindFrameById(*((_DWORD *)this + 7));
  if ( !FrameById )
    return 0LL;
  v6 = (int *)FrameById[5].Blink + 54 * *(unsigned int *)(v5 + 32);
  switch ( v3 )
  {
    case 585:
      v7 = *v6 ^ (*v6 ^ (v4 << 24)) & 0x1000000 | 0x800000;
LABEL_8:
      *v6 = v7;
      break;
    case 586:
      v7 = *v6 ^ (*v6 ^ (v4 << 28)) & 0x10000000 | 0x8000000;
      goto LABEL_8;
    case 593:
      v8 = v6[1];
      *v6 |= 0x80000000;
      v6[1] ^= ((unsigned __int8)v4 ^ (unsigned __int8)v8) & 1;
      break;
    case 594:
      v6[1] = v6[1] ^ (v6[1] ^ (16 * v4)) & 0x10 | 8;
      break;
    default:
      *v6 = *v6 ^ (*v6 ^ (v4 << 20)) & 0x100000 | 0x80000;
      break;
  }
  if ( v4 )
    *((_DWORD *)&FrameById[6].Flink[1].Flink + 10 * (unsigned int)v6[2] + 1) |= 8u;
  return 1LL;
}
