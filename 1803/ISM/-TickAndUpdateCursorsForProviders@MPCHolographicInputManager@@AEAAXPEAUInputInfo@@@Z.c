/*
 * XREFs of ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E850
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18004FF78 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::TickAndUpdateCursorsForProviders(
        MPCHolographicInputManager *this,
        struct InputInfo *a2)
{
  struct MPCGamepadInputHelper *Instance; // rcx
  __int64 v5; // rax
  char v6; // dl
  char v7; // r8
  __int128 v8; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall **v9)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v11)(); // [rsp+68h] [rbp-10h]
  struct InputInfo *v12; // [rsp+88h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_DWORD *)a2 + 130) == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    v5 = *((_QWORD *)a2 + 80);
    if ( v5 == *((_QWORD *)Instance + 1) || v5 == *((_QWORD *)Instance + 2) )
    {
      v6 = 1;
      if ( !*((_BYTE *)a2 + 600) || (v7 = 1, *((_BYTE *)a2 + 602)) )
        v7 = 0;
      *((_BYTE *)Instance + 39) = v7;
      if ( v7 && !*((_DWORD *)a2 + 158) )
        goto LABEL_11;
    }
    else
    {
      *((_BYTE *)Instance + 39) = 0;
    }
    v6 = 0;
LABEL_11:
    *((_BYTE *)Instance + 40) = v6;
    *((_BYTE *)Instance + 41) = *((_BYTE *)a2 + 672) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
    *(_QWORD *)&v8 = this;
    *((_QWORD *)&v8 + 1) = &v12;
    v9 = off_1800EE800;
    v11 = &v9;
    v10 = v8;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v9);
  }
}
