/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00AA480
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C00A9EC0 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA2B8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA3AC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void vGarbageCollectObjects(void)
{
  int v0; // ecx
  __int64 v1; // rdx
  int v2; // ebx
  char v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v0 = 0;
  v3 = 30;
  while ( 1 )
  {
    v2 = HmgNextGarbageCollectible(v0, (unsigned __int64 *)&v4, &v3);
    if ( !v2 )
      break;
    if ( v3 == 5 )
    {
      vGarbageCollectObject<SURFREF>(v4, v1);
    }
    else if ( v3 == 8 )
    {
      vGarbageCollectObject<EPALOBJ>(v4, v1);
    }
    v0 = v2;
  }
}
