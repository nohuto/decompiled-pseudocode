/*
 * XREFs of NVMeHwStartIo @ 0x1C00023F0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerPowerDown @ 0x1C0004E10 (NVMeControllerPowerDown.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // dl
  int v7; // ecx
  __int64 v8; // rax
  bool v9; // zf
  int v10; // r8d
  unsigned __int8 *v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rsi

  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v5;
  if ( v7 == 37 )
  {
    if ( v5 == 40 )
    {
      v8 = a2 + *(unsigned int *)(a2 + 120);
      v9 = *(_DWORD *)(v8 + 16) == 1;
      v10 = *(_DWORD *)(v8 + 12);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 64) == 1;
      v10 = *(_DWORD *)(a2 + 8);
    }
    LOBYTE(a4) = v9;
    if ( v9 )
    {
      if ( v10 == 2 || v10 == 23 )
      {
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
      }
      else
      {
        if ( v10 != 4 )
        {
          *(_BYTE *)(a2 + 3) = 6;
LABEL_33:
          StorPortNotification(0LL, a1, a2, a4);
          return 1;
        }
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFC | 2;
      }
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_33;
    }
  }
  if ( v5 == 40 )
  {
    v11 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 52));
    v12 = v11[8];
    a4 = v11[9];
    v13 = v11[10];
  }
  else
  {
    v12 = *(unsigned __int8 *)(a2 + 5);
    a4 = *(unsigned __int8 *)(a2 + 6);
    v13 = *(unsigned __int8 *)(a2 + 7);
  }
  if ( v12
    || (_DWORD)a4
    || (unsigned int)v13 >= *(_DWORD *)(a1 + 148)
    || (v14 = (unsigned int)v13, !*(_QWORD *)(a1 + 8 * v13 + 1184)) )
  {
    *(_BYTE *)(a2 + 3) = 8;
    goto LABEL_33;
  }
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( v7 == 7 )
    {
      if ( *(_BYTE *)(a1 + 16) )
        NVMeControllerPowerDown(a1);
      *(_DWORD *)(*(_QWORD *)(a1 + 8 * v14 + 1184) + 20LL) |= 2u;
      *(_BYTE *)(a2 + 3) = 1;
    }
    else if ( v7 != 9 )
    {
      *(_BYTE *)(a2 + 3) = 6;
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
    goto LABEL_33;
  ProcessCommand(a1, a2);
  return 1;
}
