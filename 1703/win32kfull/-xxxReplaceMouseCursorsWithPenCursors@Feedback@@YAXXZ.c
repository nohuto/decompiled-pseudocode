/*
 * XREFs of ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01B7024
 * Callers:
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01B7184 (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C00C18E4 (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
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

  v1 = (unsigned int *)&unk_1C02EDD70;
  v2 = 4LL;
  v3 = *(_DWORD *)(gpsi + 2040LL);
  do
  {
    if ( v3 )
      v4 = v1[1];
    else
      v4 = v1[2];
    RtlInitUnicodeStringOrId(&v7, (WCHAR *)(unsigned __int16)v4);
    Image = (struct tagCURSOR *)xxxClientLoadImage((char **)&v7, v5, 2u, 0, 0, 64);
    if ( Image )
    {
      zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[8 * *v1 + 4]);
      UpdateSystemCursorPath(*v1, &v7);
      xxxSetMonitorIcoCurIndex((__int64)&v7, 0, *v1, 1);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  Feedback::gfUsingPenCursors = 1;
}
