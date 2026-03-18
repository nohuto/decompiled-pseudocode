/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01BC380
 * Callers:
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01BC4E0 (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C0051C30 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 */

void __fastcall Feedback::xxxReplaceMouseCursorsWithPenCursors(Feedback *this)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  unsigned int v4; // eax
  __int64 v5; // rdx
  struct tagCURSOR *Image; // rax
  struct _UNICODE_STRING v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = (unsigned int *)&unk_1C02EA918;
  v2 = 4LL;
  v3 = *(_DWORD *)(gpsi + 2040LL);
  do
  {
    if ( v3 )
      v4 = v1[1];
    else
      v4 = v1[2];
    RtlInitUnicodeStringOrId(&v7, (WCHAR *)(unsigned __int16)v4);
    Image = (struct tagCURSOR *)xxxClientLoadImage((void **)&v7, v5, 2u, 0, 0, 0x40u);
    if ( Image )
    {
      zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[8 * *v1 + 4]);
      UpdateSystemCursorPath(*v1, &v7);
      xxxSetMonitorIcoCurIndex((int)&v7, 0, *v1);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  Feedback::gfUsingPenCursors = 1;
}
