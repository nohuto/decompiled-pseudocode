/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x1C00F3BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C007B5CC (-iSetMapMode@DC@@QEAAHH@Z.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, int *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  DC *v20; // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+28h] [rbp-10h]
  int v22; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 1;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock(&v20, a1);
  if ( v20 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v7 = *((_DWORD *)v20 + 9) & 0x400;
      *((_DWORD *)v20 + 9) &= ~0x400u;
      goto LABEL_10;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = *((_DWORD *)v20 + 631);
      *((_DWORD *)v20 + 631) = a3;
      goto LABEL_10;
    }
    v11 = v10 - 2;
    if ( !v11 )
    {
      v19 = *((_QWORD *)v20 + 10);
      v7 = *(_DWORD *)(v19 + 164);
      *(_DWORD *)(v19 + 164) = a3;
      goto LABEL_10;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
LABEL_10:
      if ( v8 )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (int *)W32UserProbeAddress;
        *a4 = v7;
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      return v8;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v7 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v20 + 10);
        v7 = *(_DWORD *)(v18 + 104);
        *(_DWORD *)(v18 + 104) = a3;
      }
      goto LABEL_10;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 308LL);
      if ( v7 != a3 )
        v7 = DC::iSetMapMode(v20, a3);
      goto LABEL_10;
    }
    if ( v14 != 1 )
    {
      v8 = 0;
      goto LABEL_10;
    }
    v16 = *((_DWORD *)v20 + 44);
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 10) + 312LL) & 1) != 0 )
    {
      v7 = 2 - ((v16 & 4) != 0);
      if ( a3 == 2 )
        goto LABEL_19;
      if ( a3 != 1 )
      {
LABEL_34:
        EngSetLastError(0x57u);
        v7 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v7 = ((v16 & 4) != 0) + 1;
      if ( a3 != 2 )
      {
        if ( a3 == 1 )
        {
LABEL_19:
          v17 = v16 & 0xFFFFFFFB;
LABEL_20:
          *((_DWORD *)v20 + 44) = v17;
          goto LABEL_10;
        }
        goto LABEL_34;
      }
    }
    v17 = v16 | 4;
    goto LABEL_20;
  }
  if ( a2 == 5 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (int *)W32UserProbeAddress;
    *a4 = 0x80000000;
  }
  return 0LL;
}
