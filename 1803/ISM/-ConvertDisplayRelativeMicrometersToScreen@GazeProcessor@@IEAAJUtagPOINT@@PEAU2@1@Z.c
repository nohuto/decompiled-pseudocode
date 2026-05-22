/*
 * XREFs of ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x180037EF0
 * Callers:
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180038000 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
        GazeProcessor *this,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4)
{
  int v5; // r9d
  struct tagPOINT v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // rax
  int v9; // ecx
  __int128 v11; // [rsp+0h] [rbp-18h]
  struct tagPOINT v12; // [rsp+20h] [rbp+8h]
  struct tagPOINT v13; // [rsp+20h] [rbp+8h]

  v5 = (int)(float)((float)((float)((float)a2.y * *((float *)this + 21)) + (float)((float)a2.x * *((float *)this + 19)))
                  + *((float *)this + 23));
  v12.y = (int)(float)((float)((float)((float)a2.y * *((float *)this + 22))
                             + (float)((float)a2.x * *((float *)this + 20)))
                     + *((float *)this + 24));
  v12.x = v5;
  v6 = v12;
  *a3 = v12;
  if ( a4 )
  {
    v7 = v5;
    v11 = *(_OWORD *)((char *)this + 100);
    if ( v5 < (int)v11
      || v5 >= SDWORD2(v11)
      || v12.y < (int)HIDWORD(*(_QWORD *)((char *)this + 100))
      || v12.y >= SHIDWORD(v11) )
    {
      if ( (int)v11 > v5 )
        v7 = *(_OWORD *)((char *)this + 100);
      if ( DWORD2(v11) - 1 >= v7 )
      {
        if ( (int)v11 > v5 )
          v5 = *(_OWORD *)((char *)this + 100);
        v13.x = v5;
      }
      else
      {
        v13.x = DWORD2(v11) - 1;
      }
      v8 = HIDWORD(*(unsigned __int64 *)&v6);
      v9 = v8;
      if ( SDWORD1(v11) > (int)v8 )
        v9 = DWORD1(v11);
      if ( HIDWORD(v11) - 1 >= v9 )
      {
        if ( SDWORD1(v11) > (int)v8 )
          LODWORD(v8) = DWORD1(v11);
        v13.y = v8;
      }
      else
      {
        v13.y = HIDWORD(v11) - 1;
      }
      v6 = v13;
    }
    *a4 = v6;
  }
  return 0LL;
}
